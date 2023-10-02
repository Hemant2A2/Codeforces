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
        int n;
        cin >> n;
        v sb;
        v sa;
        for(int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            if(i==0)
                sa.pb(b);
            else
            {
                if(b >= sa.back())
                    sa.pb(b);
                else
                {
                    sa.pb(b);
                    sa.pb(b);
                }
            }
        }

        cout << sa.size() << "\n";
        for(size_t i = 0; i < sa.size(); i++)
        {
            cout << sa[i] << " " ;
        }
        cout << "\n";

    }
    return 0;
}