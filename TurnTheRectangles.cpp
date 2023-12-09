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
    //cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        pair<ll,ll> p;
        vp rec;
        for(size_t i = 0; i < n; i++)
        {
         	ll a,b;
         	cin >> a >> b;
         	p.ff = a;
         	p.ss = b;
         	rec.pb(p);
        }
        reverse(all(rec));
        ll min = rec[0].ff < rec[0].ss ? rec[0].ff : rec[0].ss;
        bool ok = true;
        for(size_t i = 1; i < n; i++)
        {
         	if(rec[i].ff >= min && rec[i].ss >= min)
         		min = rec[i].ff < rec[i].ss ? rec[i].ff : rec[i].ss;
         	else if(rec[i].ff >= min)
         		min = rec[i].ff;
         	else if(rec[i].ss >= min)
         		min = rec[i].ss;
         	else
         	{
         		ok = false;
         		break;
         	}
        }
        if(ok)
        	cout << "YES";
        else
        	cout << "NO";
        
    }
    return 0;
}
