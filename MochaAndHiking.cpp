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
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n;
        cin>> n;
        v paths;
        for(size_t i = 0; i < n; i++)
        {
         	int a;
         	cin >> a;
         	paths.pb(a);
        }
        if(paths.back() == 0)
        {
        	for(size_t i = 1; i <= n+1; i++)
        	{
        	 	cout << i << " ";
        	}
        	cout << nline;
        }
        else
        {
        	if(paths[0] == 1)
        	{
        		cout << n+1 << " ";
        		for(size_t i = 1; i <= n; i++)
        		{
        		 	cout << i << " ";
        		}
        		cout << nline;
        	}
        	else
        	{
        		bool check = false;
        		int idx = -1;
        		for(size_t i = 1; i < n; i++)
        		{
        		 	if(paths[i-1] == 0 && paths[i] == 1)
        		 	{
        		 		check = true;
        		 		idx = i;
        		 		break;
        		 	}
        		}
        		if(check)
        		{
        			for(size_t i = 1; i <=idx; i++)
        			{
        			 	cout << i << " ";
        			}
        			cout << n+1 << " ";
        			for(size_t i = idx+1; i <= n; i++)
        			{
        			 	cout << i << " ";
        			}
        			cout << nline;
        		}
        		else
        			cout << -1 << nline;
        	}
        }
    }
    return 0;
}
