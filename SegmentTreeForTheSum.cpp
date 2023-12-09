#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define nline "\n"
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

struct segment_tree 
{
	int n;
	v st;

	//initialisation of tree with n elements
	void init(int _n) 
	{
		this->n = _n;
		st.resize(4 * n, 0);
	}

	void build(int start, int ending, int node, v &vec) 
	{
		// leaf node base case
		if (start == ending) 
		{
			st[node] = vec[start];
			return;
		}

		int mid = (start + ending) / 2;

		// left subtree is (start,mid)
		build(start, mid, 2 * node + 1, vec);

		// right subtree is (mid+1,ending)
		build(mid + 1, ending, 2 * node + 2, vec);

		st[node] = st[node * 2 + 1] + st[node * 2 + 2];
	}

	ll sum_query(int start, int ending, int l, int r, int node) 
	{
		// non overlapping case
		if (start > r || ending < l)
			return 0;

		// complete overlap
		if (start >= l && ending <= r)
			return st[node];

		// partial case
		int mid = (start + ending) / 2;

		ll q1 = sum_query(start, mid, l, r, 2 * node + 1);
		ll q2 = sum_query(mid + 1, ending, l, r, 2 * node + 2);

		return q1 + q2;
	}

	void update(int start, int ending, int node, int index, ll value) 
	{
		// base case
		if (start == ending) 
		{
			st[node] = value;
			return;
		}

		int mid = (start + ending) / 2;
		if (index <= mid)
			// left subtree
			update(start, mid, 2 * node + 1, index, value);
		else
			// right subtree
			update(mid + 1, ending, 2 * node + 2, index, value);

		st[node] = st[node * 2 + 1] + st[node * 2 + 2];

		return;
	}

	// overloading function...
	void build(v &vec) 
	{
		build(0, n - 1, 0, vec);
	}

	ll sum_query(int l, int r) // [l,r] , l and r both included!
	{
		return sum_query(0, n - 1, l, r, 0);
	}

	void update(int index, ll value) 
	{
		update(0, n - 1, 0, index, value);
	}

	//Begin by writing this in main--->

	// segment_tree tree;
	// tree.init(vec.size());
	// tree.build(vec);
};


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    //cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >> m;
        v vec(n);
        for(size_t i = 0; i < n; i++)
       		cin >> vec[i];
       	segment_tree tree;
       	tree.init(n);
       	tree.build(vec);
       	for(size_t i = 0; i < m; i++)
       	{
       	 	int q,x,y;
       	 	cin >> q >> x >> y;
       	 	if(q == 1)
       	 		tree.update(x,y);
       	 	else
       	 		cout << tree.sum_query(x,y-1) << nline;
       	}
    }
    return 0;
}
