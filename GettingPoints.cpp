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
        ll n,p,l,t;
        cin >> n >> p >> l >> t;
        ll task = n/7;
        ll days = 0;
        if(n%7)
        	task++;
        ll val = (l + 2*t)*(task/2);
        if( val < p)
        {
        	days = task/2 + (task%2);
        	if(val + (l+t)*(task%2) < p)
        	{
        		ll left = p - val - (l+t)*(task%2);
        		days += left/l;
        		if(left%l)
        			days++;
        	}
        }
        else
        {
        	days = p/(l + 2*t);
        	if(p%(l+2*t))
        		days++;
        }
        cout << n - days << nline;
    }
    return 0;
}
