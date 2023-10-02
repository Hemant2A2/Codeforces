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
        v h;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            h.pb(a);
        }
        ll diff = -1;
        for(ll i = 0; i < n-1; i++)
        {
            if(i==0)
                diff = h[i] - h[i+1];
            else
                diff += h[i] - h[i+1];
        }

        if(diff == n-1)
            cout << "YES" << "\n";
        else    
            cout << "NO" << "\n";
        

    }
    return 0;
}