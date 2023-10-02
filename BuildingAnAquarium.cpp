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
typedef vector<ll> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll x;
        cin >> x;
        v height;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            height.pb(a);
        }
        sort(height.begin(), height.end());
        ll w=0;
        ll i=n-1;
        while(i>=0)
        {
            ll j = i;
            while(j>=0)
            {
                w += height[i] - height[j];
                j--;
            }
            if(w> x)
                i--;
            else
                break;
            
            w = 0;
        }
        if(w==x)
        {
            cout << i << "\n";
        }
        else
        {
            ll e = i;
        }

    }
    return 0;
}