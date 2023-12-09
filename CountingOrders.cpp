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
const ll m  = 1e9 + 7;

ll binmul(ll a, ll b)
{
    a %= m;
    ll ans = 0;
    while (b)
    {
        if (b & 1)
            ans = (ans + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return ans;
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
        ll n;
        cin >> n;
        v nums;
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	nums.pb(a);
        }
        sort(all(nums));
        v val;
        for(ll i = 0; i < n; i++)
        {
         	ll b;
         	cin >> b;
         	ll l = -1,h = n;
         	while(l+1 < h)
         	{
         		ll c = (l+h)/2;
         		if(nums[c] < b)
         			l = c;
         		else
         			h = c;
         	}
         	if(h < n)
         	{
	         	if(nums[h] == b)
	         		val.pb(n-1-h);
	         	else
	         		val.pb(n-h);
         	}
         	else
         		val.pb(0);
        }
        sort(all(val));
        ll ans = val[0];
        if(ans > 0)
        {
        	bool ok = true;
	        for(ll i = 1; i < n; i++)
	        {
	         	if(val[i] - i <= 0)
	         	{
	         		ok = false;
	         		break;
	         	}
	         	ans = binmul(ans,val[i] - i);
	        }
	        if(ok)
	        	cout << ans << nline;
	        else
	        	cout << 0 << nline;
	    }
	    else
	    	cout << 0 << nline;
    }
    return 0;
}
