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
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        v nums;
        ll sum = 0;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	nums.pb(a);
        }
        sort(all(nums));
        v pre_sum;
        for(size_t i = 0; i < n; i++)
        {
         	sum += nums[i];
         	pre_sum.pb(sum);
        }
        int m = 0;
        ll max = 0;
        while(m <=k)
        {
        	if(m == 0)
        		max = pre_sum[n-k+m -1];
        	else
        		max = max > (pre_sum[n-k+m-1] - pre_sum[2*m - 1]) ? max : (pre_sum[n-k+m-1] - pre_sum[2*m - 1]);
        	m++;
        }

        cout << max << nline;
        
    }
    return 0;
}
