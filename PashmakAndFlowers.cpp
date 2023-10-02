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
typedef vector<long> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    v flowers;
    ll max = 0, min = 1e9 + 1;
    for(ll i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        flowers.pb(b);
        if(max < b)
            max = b;
        if(min > b)
            min = b;
    }

    ll cmin=0, cmax=0;
    if(min != max)
    {
        for(ll i = 0; i < n; i++)
        {
            if(flowers[i] == min)
                cmin++;
            if(flowers[i]== max)
                cmax++;
        }
        cout << max-min << " " << cmin*cmax;
    }
    else
    {
        cout << max-min << " " << (n*(n-1))/2;
    }
    return 0;
}