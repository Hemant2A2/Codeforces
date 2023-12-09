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
        int n;
        cin >> n;
        v idx;
        v nums;
        ll sum = 0;
        bool nog = false;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	nums.pb(a);
         	sum += abs(a);
         	if(a > 0)
         		idx.pb(i);
         	if(a < 0)
         		nog = true;
        }
        if(idx.size())
        {
        	//sort(all(idx));
        	size_t m = idx.size();
        	ll curr = idx[0];
        	ll cnt = 0;
        	if(curr == 0)
        		cnt = 0;
        	else
        	{
        		bool neg = false;
        		for(size_t i = 0; i < curr; i++)
        		{
        		 	if(nums[i] < 0)
        		 		neg = true;
        		}
        		if(neg)
        			cnt++;
        	}
        	for(size_t i = 1; i < m; i++)
        	{
        	 	if(idx[i] != curr + 1)
        	 	{
        	 		for(int j = curr+1 ; j < idx[i]; j++)
        	 		{
        	 			if(nums[j] < 0)
        	 			{
        	 				cnt++;
        	 				break;
        	 			}
        	 		}	
        	 		curr = idx[i];
        	 	}
        	 	else
        	 		curr = idx[i];
        	}
        	if(idx.back() != n-1)
        	{
        		bool neg = false;
        		for(size_t i = idx.back()+1; i < n; i++)
        		{
        		 	if(nums[i] < 0)
        		 		neg = true;
        		}
        		if(neg)
        			cnt++;
        	}

        	cout << sum << " " << cnt << nline;
        }
        else
        {
        	if(nog)
        		cout << sum << " " << 1 << nline;
        	else
        		cout << sum << " " << 0 << nline;
        }
    }
    return 0;
}
