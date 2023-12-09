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
        ll x , k,x_min;
        cin>> x >> k;
        if(k >= 9)
        {
        	if(k < 19)
         		x_min =  10*(k-9) + 9;
         	else if( k == 19)
         		x_min = 199;
         	else
         		x_min = 299;
        }
        else
        	x_min = k;

        if(x <= x_min)
        	cout << x_min << nline;
        else
        {
        	ll diff = x - x_min;
        	if(k < 19)
        	{
	        	if(diff%9 == 0)
	        		cout << x_min + diff << nline;
	        	else
	        		cout  << x_min + (diff/9  + 1)*9 <<nline;
	        }
	        else if(k == 19)
	       	{
	       		if(diff%90 == 0)
	        		cout << x_min + diff << nline;
	        	else
	        		cout  << x_min + (diff/90  + 1)*90 <<nline;
	       	}
	       	else
	       	{
	       		if(diff%99 == 0)
	        		cout << x_min + diff << nline;
	        	else
	        		cout  << x_min + (diff/99  + 1)*99 <<nline;
	       	}
        }
    }
    return 0;
}
