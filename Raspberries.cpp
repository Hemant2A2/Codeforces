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
        cin >> n >>k;
        
        v nums;
        for(size_t i = 0; i < n; i++)
        {
         	int a;
         	cin >> a;
         	nums.pb(a);
        }
        if(k == 4)
        {
        	int ans,f;
        	ans = f  =  0;
        	for(size_t i = 0; i < n; i++)
        	{
        	 	if(nums[i]%2 == 0)
        	 	{
        	 		if(nums[i]%4 == 0)
        	 			f += 2;
        	 		else
        	 			f += 1;
        	 	}
        	 	else
        	 	{
        	 		if(nums[i] % 4 == 3)
        	 			ans = 1;
        	 	}
        	}
        	if(f >= 2)
        		cout << 0 <<nline;
        	else
        	{
        		if(ans)
        			cout << 1 <<nline;
        		else
        		{
        			if(f==1)
        				cout << 1 << nline;
        			else
        				cout << 2 <<nline;
        		}
        	}
        }
        else
        {
        	bool ok = false;
        	v min;
        	for(size_t i = 0; i < n; i++)
        	{
        	 	if(nums[i] %k == 0)
        	 	{
        	 		ok = true;
        	 		break;
        	 	}
        	 	else
        	 		min.pb(k*(nums[i]/k + 1) - nums[i]);
        			
        	}
        	sort(all(min));
        	if(ok)
        		cout << 0 << nline;
        	else
        		cout << min[0] << nline;
        	
        }
    }
    return 0;
}
