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

ll power(ll n)
{
	ll p = 0;
	while(n%2==0)
	{
		n = n/2;
		p++;
	}
	return p;
}

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
        ll n,q;
        cin >> n >> q;
        v nums;
        map<ll,ll> hash;
        v exp;
        v ind;
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	nums.pb(a);
         	hash.insert(make_pair(power(a),i));
        }
        for(auto it = hash.begin(); it != hash.end() ; it++)
        {
        	exp.pb(it->ff);
        	ind.pb(it->ss);
        }
        ll sz = exp.size();
        for(ll i = 0; i < q; i++)
        {
         	ll qe;
         	cin >> qe;
         	ll l = -1, h = sz;
         	while(l+1 < h)
         	{
         		ll m  = (l+h)/2;
         		if(exp[m] < qe)
         			l = m;
         		else
         			h = m;
         	}
         	for(ll j = h; j < sz; j++)
         	{
         	 	nums[ind[j]] += (ll)pow(2,qe-1);
         	}
        }
        for(ll i = 0; i < n; i++)
        {
         	cout << nums[i] << " ";
        }
        cout << nline;
    }
    return 0;
}
