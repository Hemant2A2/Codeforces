#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#define pb push_back
#include <string>
using namespace std;
typedef long long ll;
typedef vector<ll> v;
typedef unsigned long long ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m;
    cin >> n >> m;
    v house;
    for(ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        house.pb(a);
    }

    ll sum = 0;
    for(ll i = 0; i < m-1; i++)
    {
        ll diff = house[i+1] - house[i];
        if(i == 0)
        {
            sum += house[i] - 1;
        }
        if(diff<0)
        {
            diff += n;
            sum += diff;
        }
        // else if(diff == 0)
        // {
        //     sum += n;
        // }
        else
        {
            sum += diff;
        }
    }

    cout << sum ;
    return 0;
}