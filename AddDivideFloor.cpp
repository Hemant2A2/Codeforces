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

// bool check_pow(ll n)
// {
// 	if(n)
// 		return !(n &(n-1));
// 	return true;
// }

int exp(ll n)
{
	int p = 0;
	while(n>1)
	{
		n /= 2;
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
        int n;
        cin >> n;
        v nums;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	nums.pb(a);
        }
        sort(all(nums));
        int x = exp(nums[0]);
        int y = exp(nums.back());
        int mn = nums[0];
        int mx = nums.back();
        for(size_t i = 0; i < n; i++)
        {
         	if(x > exp(nums[i]))
         	{
         		x = exp(nums[i]);
         		mn = nums[i];
         	}
         	if(y < exp(nums[i]))
         	{
         		y = exp(nums[i]);
         		mx = nums[i];
         	}
        }
        
        if(nums[0] == 0)
        {
        	if(mx > n)
        		cout << mx+1 << nline;
        	else
        	{
        		cout << mx+1 << nline;
        		for(size_t i = 0; i <= mx; i++)
        			cout << 0 << " " ;
        		cout << nline;
        	}
        }
        else
        {
        	if(mn != mx)
        	{
	        	cout << mx << nline;
	        	for(size_t i = 0; i < mn; i++)
	        		cout << 0 << " ";
	        	for(size_t i = mn; i < mx; i++)
	        		cout << 1 << " ";
	        	cout << nline;
	        }
	    	else
		    	cout << 0 << nline;
        		
        }
	    	


    }
    return 0;
}
