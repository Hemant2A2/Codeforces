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

ll w,h,n;
bool f(ll m)
{
    return (m/w)*(m/h) >= n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> w >> h >> n;
    ll l=0, u = 1;
    while(!f(u)){u *= 2;}
    while(l+1<u)
    {
        ll m = (l+u)/2;
        if(f(m))
            u = m;
        else
            l = m;
    }
    cout << u;
    return 0;
}
