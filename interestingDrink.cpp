#include <iostream>
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
    int n;
    cin >> n;
    v price;
    for(size_t i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        price.pb(x);
    }
    sort(price.begin(), price.end());
    int q;
    cin >> q;
    for(size_t i = 0; i < q; i++)
    {
        ll m;
        cin >> m;
        auto l = lower_bound(price.begin(),price.end(),m);
        auto h = upper_bound(price.begin(),price.end(),m);
        auto lb = l - price.begin();
        auto ub = h - price.begin();
        if(lb == ub)
        {
            if( lb == 0 && ub == 0)
                cout << 0 << "\n";
            else
                cout << lb << "\n";
        }
        else
        {
            cout << ub<<"\n";
        }
    }
    return 0;
}