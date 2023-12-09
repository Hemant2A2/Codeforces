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
typedef vector<pair<ll,ll> > vp;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        ll n , k;
        cin >> n >> k;
        //v health;
        v order;
        bool pre = false;
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	//health.pb(a);
         	if(a%k)
         		order.pb(a%k);
         	else
         	{
         		order.pb(k);
         		pre = true;
         	}
        }
        pair<ll,ll> p;
        vp idx;
        for(ll i = 0; i < n; i++)
        {
         	p.ff = order[i];
         	p.ss = i+1;
         	idx.pb(p);
        }
        sort(all(idx));
        ll i = n-1;
        if(pre)
        {
	        for(i; i >= 0; i--)
	        {
	        	if(idx[i].ff == k)
	        		continue;
	        	else
	        		break;
	        }
	        for(ll z = i+1; z < n; z++)
	        	cout << idx[z].ss << " ";
	    }
        for(ll  j = 0; j <= i ; j++)
        {
         	cout << idx[j].ss << " ";
        }
	    cout << nline;
    }
    return 0;
}
