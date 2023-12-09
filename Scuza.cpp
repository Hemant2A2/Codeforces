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
        int n,q;
        cin >> n >> q;
        v heights;
        v jump;
        ll sum = 0;
        ll jp;
        for(size_t i = 0; i < n; i++)
        {
         	ll h;
         	cin >> h;
            if(i == 0)
                jp = h;
            else
                jp = max(jp,h);
            jump.pb(jp);
         	sum += h;
         	heights.pb(sum);
        }
        for(size_t i = 0; i < q; i++)
        {
         	ll q;
         	cin >> q;
            if(q < jump[0])
                cout << 0 << " ";
            else if( q > jump.back())
                cout << heights.back() << " ";
            else
            {
               int l=-1, h = n;
               while(l+1<h)
               {
                    int m = (l+h)/2;
                    if(jump[m] <= q)
                        l = m;
                    else
                        h = m;
               }
               cout << heights[l] << " ";
            }
        }
        cout << nline;
    }
    return 0;
}
