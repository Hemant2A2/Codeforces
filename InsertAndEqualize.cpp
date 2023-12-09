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

ll gcd(ll a , ll b)
{
    while(b)
    {
        a %= b;
        swap(a,b);
    }
    return a;
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
        int n;
        cin >> n;
        ll nums[n];
        ll min = 1e9 + 1;
        for(size_t i = 0; i < n; i++)
         	cin >> nums[i];
        if(n == 1)
        	cout << 1 << nline;
        else
        {
	        sort(nums , nums + n);
		    v diff;
		    set<ll> val;
		    for(size_t i = 1; i < n; i++)
		    {
		      diff.pb(nums[i] - nums[i-1]);
		      val.insert(nums[i] - nums[i-1]);
		    }
		    for(size_t i = 0; i < diff.size(); i++)
		    {
		     	if(min > diff[i])
		     		min = diff[i];
		    }
		    if(min == 1)
		    {
		    	diff.pb(1);
		    	reverse(all(diff));
		    	v cf_sum;
		    	ll sum = 0;
		    	for(size_t i = 0; i < diff.size(); i++)
		    	{
		    	 	sum += diff[i];
		    	 	cf_sum.pb(sum);
		    	}
		    	ll ans = 0;
		    	for(size_t i = 0; i < cf_sum.size(); i++)
		    	{
		    	 	ans += cf_sum[i];
		    	}
		    	cout << ans << nline;
		    }
		    else
		    {
			    for(auto it = val.begin(); it != val.end(); it++)
			    {
			    	min = gcd(min,*it);
			    }
			    for(size_t i = 0; i < diff.size(); i++)
			    {
			     	diff[i] /= min;
			    }
			    reverse(all(diff));
			    v temp;
			    bool vis = false;
			    for(size_t i = 0; i < diff.size(); i++)
			    {
			     	if(diff[i] > 1 && !vis)
			     	{
			     		temp.pb(1);
			     		temp.pb(diff[i]-1);
			     		vis = true;
			     	}
			     	else
			     	{
			     		temp.pb(diff[i]);
			     	}
			    }
			    v cf_sum;
		    	ll sum = 0;
		    	for(size_t i = 0; i < temp.size(); i++)
		    	{
		    	 	sum += temp[i];
		    	 	cf_sum.pb(sum);
		    	}
		    	ll ans = 0;
		    	for(size_t i = 0; i < cf_sum.size(); i++)
		    	{
		    	 	ans += cf_sum[i];
		    	}
		    	cout << ans << nline;
			}
		}


    }
    return 0;
}
