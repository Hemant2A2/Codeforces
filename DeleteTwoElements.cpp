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
ll r,x;

bool f1(ll y)
{
	return x+y-r < 0;
}
bool f2(ll y)
{
	return x+y-r>0;
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
        ll sum = 0;
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	sum += a;
         	nums.pb(a);
        }
        if((sum*2)%n)
        	cout << 0 <<nline;
        else
        {
        	sort(all(nums));
        	r = ((sum*2)/n);
        	ll pairs = 0;
        	for(ll i = 0; i < n-1; i++)
        	{
        	 	x = nums[i];
        	 	ll l = i, h = n;
        	 	while(l+1 < h)
        	 	{
        	 		ll m = (l+h)/2;
        	 		if(f1(nums[m]))
        	 			l = m;
        	 		else
        	 			h = m;
        	 	}

        	 	ll L =i,H = n;
        	 	while(L+1 < H)
        	 	{
        	 		ll M = (L+H)/2;
        	 		if(f2(nums[M]))
        	 			H = M;
        	 		else
        	 			L = M;
        	 	}

        	 	pairs += H - l - 1;
        	 	
        	}
        	cout << pairs <<nline;
        }
    }
    return 0;
}
