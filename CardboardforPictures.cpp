#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
using namespace std;
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;

ll func(ll n, ll c , ll sum , ll sumsq , ll w)
{
    ll e = (4*n*w*w) + (4*sum*w) + (sumsq - c);
    if(e > 0)
        return 1;
    if(e < 0)
        return -1;
    
    return 0;
}

ll findw( ll n , ll c , ll sum , ll sumsq)
{
    ll l = 1 , h = 1e9;
    ll mid = (l+h)/2;
    while(l<=h)
    {
        if(func(n,c,sum,sumsq,mid) > 0)
        {
            h = mid;
            mid = (l+h)/2;
        }  
        else if(func(n,c,sum,sumsq,mid) < 0 )
        {
            l = mid;
            mid = (l+h)/2;
        }
        else
            break;
    }
    return mid;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n, c;
        cin >> n >> c;
        ll sum=0, sumsq=0;
        for(ll i = 0; i < n; i++)
        {
            ll s;
            cin >> s;
            sum += s;
            sumsq += s*s;
        }

        ll w = findw(n,c,sum,sumsq);
        cout << w << "\n";

    }
    return 0;
}