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
        ll n,x;
        cin >> n >> x;
        v heights;
        for(ll i = 0; i < n; i++)
        {
            ll h;
            cin >> h;
            heights.pb(h);
        }
        sort(all(heights));
        v fill;
        fill.pb(0);
        ll temp = 0;
        for(ll i = 1; i < n; i++)
        {
            temp = (heights[i] - heights[i-1])*i;
            fill.pb(fill.back() + temp);
        }
        bool found = false;
        ll idx;
        for(ll i = 0; i < n; i++)
        {
            if(fill[i] > x)
            {
                idx = i-1;
                found = true;
                break;
            }
        }
        if(found)
            cout << (x-fill[idx])/(idx+1) + heights[idx] << nline;
        else
            cout << (x-fill.back())/n + heights.back() << nline;
    }
    return 0;
}
