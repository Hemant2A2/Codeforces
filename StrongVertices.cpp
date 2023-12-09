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
#define rall(x) (x).rbegin(),(x).rend()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;
typedef vector<pair<ll,ll> > vp;
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
        ll a[n],b[n],diff[n];
        for(size_t i = 0; i < n; i++)
        	cin >> a[i];
        for(size_t i = 0; i < n; i++)
        	cin >> b[i];
        for(size_t i = 0; i < n; i++)
        	diff[i] = a[i] - b[i];
        vp order;
        pair<ll,ll> p;
        for(size_t i = 0; i < n; i++)
        {
         	p.ff = diff[i];
         	p.ss = i+1;
         	order.pb(p);
        }
        sort(rall(order));
        v ans;
        ll max = order[0].ff;
        for(size_t i = 0; i < n; i++)
        {
         	if(max == order[i].ff)
         		ans.pb(order[i].ss);
        }
        sort(all(ans));
        cout << ans.size() << nline;
        for(size_t i = 0; i < ans.size(); i++)
        	cout << ans[i] << " ";
        cout << nline;

    }
    return 0;
}
