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
        bool win = true;
        ll x,y;
        for(int i = 0; i < n; i++)
        {
            ll a,b;
            cin >> a >> b;
            if(i==0)
            {
                x = a;
                y = b;
            }
            else
            {
                if(a >= x && b >= y)
                    win = false;
            }
        }

        if(win)
            cout << x << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}