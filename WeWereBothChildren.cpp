#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
#include <unordered_map>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef unordered_map<ll,ll> um;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        v hops;
        for(size_t i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            hops.pb(a);
        }
        um frogs;
        for(size_t i = 0; i < n; i++)
        {
            ll b = hops[i];
            while(b <= n)
            {
                if(auto s = frogs.find(b); s!= frogs.end())
                {
                    frogs[b]++; 
                    b += hops[i];
                }
                else
                {
                    frogs.insert({b,1});
                    b += hops[i];
                }
            }
        }
        if(frogs.size())
        {
            auto fir = frogs.begin();
            ll max = fir->ss;
            for(auto it = frogs.begin(); it != frogs.end();it++)
            {
                if(max < it->ss)
                    max = it->ss;
            }

            cout << max << "\n";
        }
        else
            cout << 0 << "\n";
    }
    return 0;
}