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
#define all(x) (x).rbegin(),(x).rend()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

ll power(ll x)
{
	ll b = 2;
	ll p = 0;
	while(true)
	{
		if(x%b == 0)
		{
			p++; b *= 2;
		}
		else
			break;
	}
	return p;

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;
        v nums;
        ll total = 0;
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	total += power(a);
         	nums.pb(a);
        }
        if(total >= n)
        	cout << 0 << nline;
        else
        {
        	ll m;
        	if(n%2)
        		m = n-2;
        	else
        		m = n-1;
        	ll oper = 0;
        	v add;
        	for(ll i = m; i >= 1; i = i-2)
        	{
        	 	add.pb(power(i+1));
        	}
        	sort(all(add));
        	for(size_t i = 0; i < add.size(); i++)
        	{
        	 	total += add[i];
        	 	oper++;
        	 	if(total >= n)
        	 		break;
        	}
        	if(total >= n)
        		cout << oper << nline;
        	else
        		cout << -1 << nline;

        }
    }
    return 0;
}
