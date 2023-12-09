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
ll n,k;

ll f(ll m)
{
	return m*m + 3*m - 2*(n+k);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    //cin >> test;
    while(test--)
    {
        cin >> n >> k;
        ll l = 0 , h = n , m;
        while(l <= h)
        {
        	m = (l+h)/2;
        	if(f(m) == 0)
        		break;
        	else if(f(m) < 0)
        		l = m+1;
        	else
        		h = m-1;
        }
        cout << n-m ;

    }
    return 0;
}
