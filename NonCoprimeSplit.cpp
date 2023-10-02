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
typedef vector<int> v;
ll p;

bool isPrime(ll x) 
{
    for (ll d = 2; d * d <= x; d++) 
    {
        if (x % d == 0)
        {
            p = d;
            return false;
        }
    }
    return x >= 2;
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
        ll l,r;
        cin >> l >> r;
        if(l==r)
        {
            if(l == 1 || isPrime(l))
                cout << -1 << "\n";
            else
                cout << p << " " <<l-p << "\n";
        }
        else
        {
            if(r < 4)
                cout << -1 << "\n";
            else
                cout << (r - r%2)/2 << " " << (r - r%2)/2 << "\n";
        }
    }
    return 0;
}


