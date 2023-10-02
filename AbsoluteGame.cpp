#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
#include <list>
using namespace std;
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef list<tuple<ll, ll , ll> > l;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    v al;
    v bo;
    for(size_t i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        al.pb(a);
    }

    for(size_t i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        bo.pb(b);
    }

    l sub;
    auto it = sub.begin();
    for(size_t i = 0; i < n; i++)
    {
        for(size_t j = 0; j < n; j++)
        {
            ll diff = abs(al[i] - bo[j]);
            tuple<ll,ll,ll> add;
            get<0>(add) = diff;
            get<1>(add) = al[i];
            get<2>(add) = bo[j];
            sub.insert(it,add);
            it++;
        }
    }
    sort(sub.begin(), sub.end());

    int t= 1;
    ll val;
    ll vbo;
    while(sub.size() <= 1)
    {
        if(t%2 == 1)
        {
            auto it = sub.begin();
            val = get<1>(*it);
            for(it; it != sub.end(); it++)
            {
                if( get<1>(*it) == val)
                    sub.erase(it);
            }
            t++;
        }
        else
        {
            auto it = sub.end();
            it--;
            vbo = get<2>(*it);
            for(it; it != sub.begin(); it--)
            {
                if( get<2>(*it) == vbo)
                    sub.erase(it);
            }
            t++;
        }
    }

    cout << abs(val - vbo) ;

    
    
    return 0;
}