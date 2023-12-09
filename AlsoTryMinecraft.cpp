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
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    //cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >> m;
        v piles,farr,barr;
        for(size_t i = 0; i < n; i++)
        {
         	ll x;
         	cin >> x;
         	piles.pb(x);
        }
        ll sum = 0;
        for(size_t i = 1; i < n; i++)
        {
         	if(piles[i] < piles[i-1])
         		sum += piles[i-1] - piles[i];
         	farr.pb(sum);
        }
        sum = 0;
        for(size_t i = n-1; i > 0; i--)
        {
         	if(piles[i] > piles[i-1])
         		sum += piles[i] - piles[i-1];
         	barr.pb(sum);
        }
        // for(size_t i = 0; i < barr.size(); i++)
        // {
        //  	cout << barr[i] << " ";
        // }
        // cout << nline;
        for(size_t i = 0; i < m; i++)
        {
         	ll a,b;
         	cin >> a >> b;
         	if(a < b)
         	{
         		a = a-1;
         		b = b-1;
         		if(a == 0)
         			cout << farr[b-1] << nline;
         		else
         			cout << farr[b-1] - farr[a-1] << nline;
         	}
         	else
         	{
         		a = n-a;
         		b = n-b;
         		if(a == 0)
         			cout << barr[b-1] << nline;
         		else
         			cout << barr[b-1] - barr[a-1] << nline;
         	}
        }
        
    }
    return 0;
}
