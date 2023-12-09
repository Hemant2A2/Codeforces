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

struct item
{
	ll val;
	int cnt;
};
typedef vector<item> vi;

struct segment_tree 
{
	int n;
	vi st;

	item leaf(ll x)
	{
		item temp;
		temp.val = x;
		temp.cnt = 1;
		return temp;
	}

	item item_MAX()
	{
		item temp;
		temp.val = 1e9+1;
		temp.cnt = 0;
		return temp;
	}

	item min(item a, item b)
	{
		if(a.val < b.val)
			return a;
		if(a.val > b.val)
			return b;
		item temp;
		temp.val = a.val;
		temp.cnt = a.cnt + b.cnt;
		return temp;
	}

	//initialisation of tree with n elements
	void init(int _n) 
	{
		this->n = _n;
		item temp;
		temp.val = 0;
		temp.cnt = 0;
		st.resize(4 * n, temp);
	}

	void build(int start, int ending, int node, v &vec) 
	{
		// leaf node base case
		if (start == ending) 
		{
			st[node].val = vec[start];
			st[node].cnt = 1;
			return;
		}

		int mid = (start + ending) / 2;

		// left subtree is (start,mid)
		build(start, mid, 2 * node + 1, vec);

		// right subtree is (mid+1,ending)
		build(mid + 1, ending, 2 * node + 2, vec);

		st[node] = min(st[node * 2 + 1], st[node * 2 + 2]);
	}

	item query(int start, int ending, int l, int r, int node) 
	{
		// non overlapping case
		if (start > r || ending < l)
			return item_MAX();

		// complete overlap
		if (start >= l && ending <= r)
			return st[node];

		// partial case
		int mid = (start + ending) / 2;

		item q1 = query(start, mid, l, r, 2 * node + 1);
		item q2 = query(mid + 1, ending, l, r, 2 * node + 2);

		return min(q1,q2);
	}

	void update(int start, int ending, int node, int index, ll value) 
	{
		// base case
		if (start == ending) 
		{
			st[node].val = value;
			st[node].cnt = 1;
			return;
		}

		int mid = (start + ending) / 2;
		if (index <= mid)
			// left subtree
			update(start, mid, 2 * node + 1, index, value);
		else
			// right subtree
			update(mid + 1, ending, 2 * node + 2, index, value);

		st[node] = min(st[node * 2 + 1], st[node * 2 + 2]);

		return;
	}

	// overloading function...
	void build(v &vec) 
	{
		build(0, n - 1, 0, vec);
	}

	item query(int l, int r) // [l,r] , l and r both included!
	{
		return query(0, n - 1, l, r, 0);
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
         	{
         		cout << tree.query(x,y-1).val << " " << tree.query(x,y-1).cnt << nline;
         	}
        }
    }
    return 0;
}
