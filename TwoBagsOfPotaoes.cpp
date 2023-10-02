#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#define pb push_back
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll y,k,n;
    cin >> y >> k >> n;
    v x;
    for(ll i = 1; i <= n-y; i++)
    {
        if( (i+y)%k == 0)
            x.pb(i);
    }

    ll sz = x.size();
    if(sz)
    {
        for(ll i = 0; i < sz; i++)
        {
            cout << x[i] << " ";
        }
    }
    else
        cout << -1;
    return 0;
}