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
ll h;
ll sum;

bool f(ll k)
{
	return sum + k - h >= 0;
}

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
        
        cin >> n >> h;
        v time;
        for(size_t i = 0; i < n; i++)
        {
         	ll num;
         	cin >> num;
         	time.pb(num);
        }
        v diff;
        for(size_t i = 1; i < n; i++)
        {
         	diff.pb(time[i]- time[i-1]);
        }
        ll l = -1,h = 1e18;
        while(l+1<h)
        {
        	ll k = (l+h)/2;
        	sum = 0;
        	for(size_t i = 0; i < diff.size(); i++)
        	{
        	 	sum += k < diff[i] ? k : diff[i];
        	}
        	if(f(k))
        		h = k;
        	else
        		l = k;
        }
        cout << h << nline;

    }
    return 0;
}
