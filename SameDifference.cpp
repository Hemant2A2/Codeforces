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
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	nums.pb(a-i);
        }
        sort(all(nums));
        ll curr = nums[0];
        ll streak = 1;
        ll total = 0;
        for(ll i = 1; i < n; i++)
        {
            if(curr == nums[i])
                streak++;
            else
            {
                total += (streak*(streak-1))/2;
                streak = 1;
                curr = nums[i];
            }
        }
        total += (streak*(streak-1))/2;
        cout << total <<nline;
        
    }
    return 0;
}
