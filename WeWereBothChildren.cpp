#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define nline "\n"
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        v hops;
        for(size_t i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            hops.pb(a);
        }
        map<ll,ll>frogs;
        for(size_t i = 0; i < n; i++)
        {
            ll b = hops[i];
            while(b <= n)
            {
                if(auto s = frogs.find(b); s!= frogs.end())
                {
                    frogs[b]++; 
                    b += hops[i];
                }
                else
                {
                    frogs.insert(make_pair(b,1));
                    b += hops[i];
                }
            }
        }
        if(frogs.size())
        {
            auto fir = frogs.begin();
            ll max = fir->ss;
            for(auto it = frogs.begin(); it != frogs.end();it++)
            {
                if(max < it->ss)
                    max = it->ss;
            }

            cout << max << nline;
        }
        else
            cout << 0 << nline;
    }
    return 0;
}
