#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
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
        int n;
        cin >> n;
        v a,b;
        for(size_t i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.pb(x);
        }
        ll y = 1;
        if(y == a[0])
            y = a[0] + 1;
        b.pb(y);
        int i = 1;
        y++;
        while(i < n)
        {
            if(y == a[i])
                y++;
            else
            {
                b.pb(y);
                y++;
                i++;
            }
        }

        cout << b.back() << "\n";

    }
    return 0;
}