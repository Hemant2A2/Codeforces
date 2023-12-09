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
        for(size_t i = 0; i < n; i++)
        {
         	ll c;
         	cin >> c;
         	nums.pb(c);
        }
        sort(all(nums));
        v pre_sum;
        ll sum = 0;
        pre_sum.pb(1);
        for(ll i = 0; i < n; i++)
        {
         	sum += nums[i];
         	pre_sum.pb(sum);
        }
        bool ok = true;
        if(n < 3)
        {
        	for(ll i = 0; i < n; i++)
        	{
        	 	if(nums[i] != 1)
        	 	{
        	 		ok = false;
        	 		break;
        	 	}
        	}
        }
        for(ll i = 0; i < n; i++)
        {
         	if(pre_sum[i] < nums[i])
         	{
         		ok = false;
         		break;
         	}
        }
        if(ok)
        {
        	cout << "yes" << nline;
        }
        else
        	cout << "no" << nline;
    }
    return 0;
}
