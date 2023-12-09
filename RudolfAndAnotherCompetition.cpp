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
typedef vector< pair< pair<ll,ll> ,ll> > vp;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

bool sort_def(const pair< pair<ll,ll> , ll > &a ,const pair< pair<ll,ll>  , ll > &b )
{
	if(a.ff.ff == b.ff.ff)
	{
		if(a.ff.ss == b.ff.ss)
			return a.ss < b.ss;
		else
			return a.ff.ss < b.ff.ss;
	}
	return a.ff.ff > b.ff.ff;
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
        ll n,m,h;
        cin >> n >> m >> h;
        vp ranking;
        for(ll i = 0; i < n; i++)
        {
        	v probs;
         	for(ll j = 0; j < m; j++)
         	{
         		ll a;
         		cin >> a;
         		probs.pb(a);
         	}
         	sort(all(probs));
         	ll sum = 0;
         	v time;
         	for(ll j = 0; j < m; j++)
         	{
         	 	sum += probs[j];
         	 	time.pb(sum);
         	}
         	sum = 0;
         	v penalty;
         	for(ll j = 0; j < m; j++)
         	{
         	 	sum += time[j];
         	 	penalty.pb(sum);
         	}
         	pair< pair<ll,ll>  ,ll> ranks;
         	pair<ll,ll> score;
         	ll points = 0;
         	ll idx = -1;
         	for(ll j = 0; j < m;j++)
         	{
         		if(time[j] <= h)
         		{
         			points++;
         			idx = j;
         		}
         		else
         			break;
         	}
         	score.ff = points;
         	if(idx == -1)
         		score.ss = 0;
         	else
         		score.ss = penalty[idx];

         	ranks.ff = score;
         	ranks.ss = i;
         	ranking.pb(ranks);
        }
        sort(all(ranking), sort_def);
        ll ans = -1;
        for(size_t i = 0; i < ranking.size(); i++)
        {
         	if(ranking[i].ss == 0)
         	{
         		ans = i+1;
         		break;
         	}
        }
        cout << ans << nline;
    }
    return 0;
}

