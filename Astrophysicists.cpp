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
        ll n,k,g;
        cin >> n >> k >> g;
        if(n > 2)
        {
        	ll f = (k*g)/(n-1);
        	ll left;
        	if(f >= g/2)
        		f = g/2 - 1;
        	if((k*g - f*(n-1))%g >= g/2)
        		left = (k*g - f*(n-1))%g;
        	else
        		left = k*g - f*(n-1);
        	cout << f*(n-1) + left << nline;
        }
        else
        	cout << 0 << nline;

    }
    return 0;
}
