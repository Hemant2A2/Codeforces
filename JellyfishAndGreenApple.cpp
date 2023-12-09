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
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

ll gcd(ll a , ll b)
{
    while(b)
    {
        a %= b;
        swap(a,b);
    }
    return a;
}

bool check_pow(ll n)
{
	return !(n &(n-1));
}

ll exp(ll n)
{
	ll p = 0;
	while(n>1)
	{
		n /= 2;
		p++;
	}
	return p;
}

ll solve(ll n, ll k)
{
	ll i = 0, ans = 0;
	while(i < k)
	{
		ll b = n&1;
		if(b)
			ans += (ll)pow(2,k) - (ll)pow(2,i);
		i++;
		n >>=1;
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
        ll n,m;
        cin >> n >> m;
        ll g = gcd(n,m);
        n /= g;
        m /= g;
        n %= m;
        if( m == 1)
        	cout << 0 << nline;
        else if(!check_pow(m))
        	cout << -1 << nline;
        else
        {
        	ll k = exp(m);
        	cout << solve(n,k)*g<< nline;
        }

    }
    return 0;
}
