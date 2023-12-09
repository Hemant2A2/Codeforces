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
        set<ll> nums;
        int e=0,o=0;
        bool one = false;
        bool zero = false;
        
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	if(a == 0)
         		zero = true;
         	if(a == 1)
         		one = true;
         	
         	if(a%2)
         		o++;
         	else
         		e++;
         	nums.insert(a);
        }
        if(e == n || o == n)
        	cout << "yes" << nline;
        else
        {
        	if(zero)
        	{
        		if(one)
        			cout << "no" << nline;
       			else
       				cout << "yes" << nline;
        	}
        	else
        	{
        		if(one)
        		{
        			v elem;
        			for(auto it = nums.begin(); it != nums.end(); it++)
        				elem.pb(*it);
        			ll prev = elem[0];
        			bool ok = true;
        			for(size_t i = 1; i < elem.size(); i++)
        			{
        			 	if(elem[i] - prev == 1)
        			 	{
        			 		ok = false;
        			 		break;
        			 	}
        			 	else
        			 		prev = elem[i];
        			}
        			if(ok)
        				cout << "yes" << nline;
        			else
        				cout << "no" << nline;
        		}
        		else
        			cout << "yes" << nline;
        	}
        }
    }
    return 0;
}
