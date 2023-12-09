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
        ll n , c;
        cin >> n >> c;
        set<ll> valid_idx1 , valid_idx2;
        for(ll i = 1; i <= n; i++)
        {
        	valid_idx1.insert(i);
        	valid_idx2.insert(i);
        }
        multimap<ll,ll> front,back;
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	front.insert(make_pair(a+i+1,i+1));
         	back.insert(make_pair(a+n-i,n-i));
        }
        v idx1, idx2, cost1, cost2;
        for(auto it = front.begin(); it != front.end(); it++)
        {
        	cost1.pb(it->ff);
        	idx1.pb(it->ss);
        }
        for(auto it = back.begin(); it != back.end(); it++)
        {
        	cost2.pb(it->ff);
        	idx2.pb(it->ss);
        }
        ll sum = 0;
        ll cnt = 0;
        ll i=0,j=0;
        while(i < n && j < n)
        {
        	if(auto s = valid_idx1.find(idx1[i]); s != valid_idx1.end())
        	{
        		if(auto k = valid_idx2.find(idx2[j]); k != valid_idx2.end())
        		{
		    		if(cost1[i] <= cost2[j])
		    		{
		    			sum += cost1[i];
		    			valid_idx2.erase(n - idx1[i]);
		    			valid_idx1.erase(idx1[i]);
		    			i++;
		    			if(sum <= c)
		    				cnt++;
		    			else
		    				break;
		    		}
		    		else
		    		{
		    			sum += cost2[j];
		    			valid_idx1.erase(n - idx2[j]);
		    			valid_idx2.erase(idx2[j]);
		    			j++;
		    			if(sum <= c)
		    				cnt++;
		    			else
		    				break;
		    		}
		    	}
		    	else
		    		j++;

        	}
        	else
        		i++;
        }
        if(sum > c)
        	cout << cnt << nline;
        else
        {
        	for(i; i<n;i++)
        	{
        		if(auto s = valid_idx1.find(idx1[i]); s != valid_idx1.end())
        		{
        			sum += cost1[i];

	    			valid_idx1.erase(idx1[i]);
	    			
	    			if(sum <= c)
	    				cnt++;
	    			else
	    				break;
        		}
        	}
        	for(j; j<n;j++)
        	{
        		if(auto k = valid_idx2.find(idx2[j]); k != valid_idx2.end())
        		{
        			sum += cost2[j];

	    			valid_idx2.erase(idx2[j]);
	    			
	    			if(sum <= c)
	    				cnt++;
	    			else
	    				break;
        		}
        	}

        	cout << cnt << nline;

        }


    }
    return 0;
}
