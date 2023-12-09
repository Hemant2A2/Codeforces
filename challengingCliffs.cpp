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
#define pf push_front
#define ff first
#define ss second
#define nline "\n"
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
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
        v heights;
        for(size_t i = 0; i < n; i++)
        {
         	ll h;
         	cin >> h;
         	heights.pb(h);
        }
        sort(all(heights));
        if(n==2)
        	cout << heights[0] << " " << heights[1] << nline;
        else
        {
	        int idx = 1;
	        int diff = heights[1]- heights[0];
	        for(size_t i = 1; i < n; i++)
	        {
	         	if(heights[i] == heights[i-1])
	         	{
	         		idx = i;
	         		break;
	         	}
	         	else
	         		if(diff > heights[i] - heights[i-1])
	         		{
	         			diff = heights[i] - heights[i-1];
	         			idx = i;
	         		}
	        }
	    	for(size_t i = idx; i < n; i++)
	    	{
	    	 	cout << heights[i] << " ";
	    	}
	    	for(size_t i = 0; i < idx; i++)
	    	{
	    	 	cout << heights[i] << " ";
	    	}
	    	cout << nline;
	    }
		    
        
    }
    return 0;
}
