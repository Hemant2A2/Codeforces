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
typedef vector<int> v;

ll m , k , a1, ak,x,y;

bool f(ll z)
{
    return y + k*z - a1 <= 0;
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
        cin >> m >> k >> a1 >> ak;
        x = m/k;
        y = m - k*x;
        ll cnt = 0;
        if( y >= a1)
        {
            if( x >= ak)
                cnt += x-ak + y - a1;
            else
                cnt += y - a1;
        }
        else
        {
            ll l = -1, h = x+1;
            while(l+1<h)
            {
                ll z = (l+h)/2;
                if(f(z))
                    l = z;
                else
                    h = z;
            }
            x = x -l;
            y = y + k*l;
            if(x >= ak)
                cnt += x - ak;
        }

        cout << cnt << "\n";
    }
    return 0;
}