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

bool sortbyss(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
	if(a.ff == b.ff)
		return a.ss > b.ss;
	return a.ff < b.ff;
}

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
        ll n;
        cin >> n;
        vp turn;
        pair<ll,ll> p;
        for(ll i = 0; i < n; i++)
        {
         	ll a,b;
         	cin >> a >> b;
         	p.ff = a;
         	p.ss = b;
         	turn.pb(p);
        }
        sort(all(turn),sortbyss);
        // for(ll i = 0; i < n; i++)
        // {
        //  	cout << turn[i].ff << " " << turn[i].ss <<nline;
        // }
        ll curr = turn[0].ff;
        ll streak = curr - 1;
        ll score = turn[0].ss;
        for(ll i = 1; i < n; i++)
        {
         	if(turn[i].ff == curr)
         	{
         		if(streak)
         		{
         			streak--;
         			score += turn[i].ss;
         		}
         	}
         	else
         	{
         		curr = turn[i].ff;
         		streak = curr - 1;
         		score += turn[i].ss;
         	}
        }
        cout << score << nline;

    }
    return 0;
}
