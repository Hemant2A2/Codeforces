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
ll n,c,sum,sum_sq;
ll f(ll m)
{
    return 4*n*m*m + 4*sum*m + sum_sq - c;
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
        cin >> n >> c;
        sum = sum_sq = 0;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            sum += a;
            sum_sq += a*a;
        }
        ll root = sqrt(n);
        ll l = 1,h = 1e9/root,m;
        while(l <= h)
        {
            m = (l+h)/2;
            if(f(m) == 0)
                break;
            else if(f(m) > 0)
                h = m-1;
            else
                l = m+1;
        }
        cout << m << nline;
    }
    return 0;
}
