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
typedef long double ld;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef vector<ld> vd;
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
    //cin >> test;
    while(test--)
    {
        cout << fixed;
        int n;
        cin >> n;
        ll l;
        cin >> l;
        v light;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	light.pb(a);
        }
        sort(all(light));
        vd rad;
        if(light[0] != 0)
        	rad.pb((ld)light[0]);
        if(light.back() != l)
        	rad.pb((ld)light.back());
        for(size_t i = 1; i < n; i++)
        {
         	ld diff = (ld)(light[i] - light[i-1])/2;
         	rad.pb(diff);
        }
        sort(all(rad));
        cout << rad.back() ;

    }
    return 0;
}
