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
typedef vector<int> v;
typedef vector<pair<char,int> > vc;
typedef vector<string> vs;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

void count_sort(v &p , v &c)
{
	int n = p.size();
	v cnt(n);
	for(size_t i = 0; i < n; i++) 
		cnt[c[i]]++;
	v p_new(n);
	v pos(n);
	pos[0] = 0;
	for(size_t i = 1; i < n; i++)
		pos[i] = pos[i-1] + cnt[i-1];
	for(size_t i = 0; i < n; i++)
	{
	 	int j = c[p[i]];
	 	p_new[pos[j]] = p[i];
	 	pos[j]++;
	}
	p = p_new;
}

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
	    string s;
	    cin >> s;
	    s += '$';
	    int n = s.size();
	    vc A(n);
	    for(size_t i = 0; i < n; i++)
	    {
	    	A[i].ff = s[i];
	    	A[i].ss = i;
	    }
	    sort(all(A));
	    v p(n);
	    for(size_t i = 0; i < n; i++)
	    	p[i] = A[i].ss;
	    v c(n);
	    c[p[0]] = 0;
	    for(size_t i = 1; i < n; i++)
	    {
	     	if(A[i].ff == A[i-1].ff)
	     		c[p[i]] = c[p[i-1]];
	     	else
	     		c[p[i]] = c[p[i-1]] + 1;
	    }
	    int k = 0;
	    while((1<<k) < n)
	    {
	    	for(size_t i = 0; i < n; i++)
	    		p[i] = (p[i] - (1<<k) + n)%n;
	    	count_sort(p,c);
	    	v c_new(n);
	    	c_new[p[0]] = 0;
		    for(size_t i = 1; i < n; i++)
		    {
		    	pair<int,int> prev,now;
		    	prev.ff = c[p[i-1]];
		    	now.ff = c[p[i]];
		    	prev.ss = c[(p[i-1] + (1<<k))%n];
		    	now.ss = c[(p[i] + (1<<k))%n];
		     	if(now == prev)
		     		c_new[p[i]] = c_new[p[i-1]];
		     	else
		     		c_new[p[i]] = c_new[p[i-1]] + 1;
		    }
		    c = c_new;
		    k++;
	    }

	    int q;
	    cin >> q;
	    for(size_t i = 0; i < q; i++)
	    {
	     	string st;
	     	cin >> st;
	     	int sz = st.size();
	     	int l = 0,h = n-1;
	     	bool found = false;
	     	while(l<=h)
	     	{
	     	 	int m = (l+h)/2;
	     	 	if(s.substr(p[m],sz) == st)
	     	 	{
	     	 		found = true;
	     	 		break;
	     	 	}
	     	 	else if(s.substr(p[m],sz) < st)
	     	 		l = m+1;
	     	 	else
	     	 		h = m-1;
	     	}
	     	if(found)
	     	 	cout << "Yes" << nline;
	     	else
	     	 	cout << "No" << nline;
	    }
    }
    return 0;
}
