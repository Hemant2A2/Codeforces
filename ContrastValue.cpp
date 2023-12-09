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
        int n;
        cin >> n;
        bool inc = false;
        bool dec = false;
        bool equal = true;
        int cnt = 1;
        v nums;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	nums.pb(a);
        }
        
        for(size_t i = 0; i < n-1; i++)
        {
         	if(nums[i+1] > nums[i])
         	{
         		equal = false;
         		if(dec && i != n-2)
         		{
         			dec = false;
         			cnt += 1;
         		}
                else if(dec && i == n-2)
                    cnt+=2;
         		else if(i == n-2)
         			cnt++;
         		inc = true;
         	}
         	else if(nums[i+1] < nums[i])
         	{
         		equal = false;
         		if(inc && i != n-2)
         		{
         			inc = false;
         			cnt += 1;
         		}
                else if(inc && i == n-2)
                    cnt+=2;
         		else if(i == n-2)
         			cnt++;
         		dec = true;
         	}
         	else
         	 if(i == n-2 && !equal)
         	 	cnt++;

        }
        cout << cnt << nline;
    }
    return 0;
}
