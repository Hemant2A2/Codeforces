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
        ll n,m;
        cin >> n >> m;
        ll M[m][n];
        for(ll i = 0; i < n; i++)
        {
         	for(ll j = 0; j < m; j++)
         	{
         	 	ll a;
         	 	cin >> M[j][i];
         	}
        }
        // for(ll i = 0; i < n; i++)
        // {
        //  	for(ll j = 0; j < m; j++)
        //  	{
         	 	
        //  	 	cout << M[j][i] << " ";
        //  	}
        //  	cout << nline;
        // }

        ll add = 0,total = 0,sum=0,ans = 0;;
        for(ll i = 0; i < m; i++)
        {
        	v temp;
        	add = sum =total = 0;
         	for(ll j = 0; j < n; j++)
         	{
         	 	temp.pb(M[i][j]);
         	}
         	sort(all(temp));
         	// for(ll j = 0; j < n; j++)
         	// {
         	//  	cout << temp[j] << " ";
         	// }
         	// cout << nline;
         	v diff;
         	for(ll j = 1; j < n; j++)
         	{
         	 	add = temp[j] - temp[j-1];
         	 	total += add;
         	 	sum += total;
         	 	diff.pb(add);
         	}
         	ll sz = diff.size();
         	sum = sum*n;

         	for(ll j = 0; j < sz; j++)
         	{
         	 	sum -= diff[j]*(n-j-1)*(n-j-1);
         	}
         	ans += sum;
        }
        cout << ans << nline;
    }
    return 0;
}
