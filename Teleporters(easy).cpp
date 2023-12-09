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
        ll n,c;
        cin >> n >> c;
        multimap<ll,ll> m;
        for(ll i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	m.insert(make_pair(a,i+1));
        }
        v cost;
        for(auto it = m.begin(); it != m.end() ; it++)
        	cost.pb(it->ff + it->ss);
        sort(all(cost));
        ll sum = 0;
        ll cnt = 0;
        for(ll i = 0; i < n; i++)
        {
         	sum += cost[i];
         	if(sum <= c)
         		cnt++;
         	else
         		break;
        }
        cout << cnt << nline;

    }
    return 0;
}

