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
typedef vector<int> v;
typedef unordered_set<int> us;
typedef unordered_map<ll,int> um;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        um stations;
        for(size_t i = 0; i < n; i++)
        {
         	ll u;
         	cin >> u;
         	stations.insert(make_pair(u,i));
        }
        for(size_t i = 0; i < k; i++)
        {
         	ll a,b;
         	cin >> a >> b;
         	if(auto i = stations.find(a); i != stations.end())
         	{
         		if(auto j = stations.find(b) ; j != stations.end())
         		{
         			if(stations[a] < stations[b])
         				cout << "YES" << nline;
         			else
         				cout << "NO" << nline;
         		}
         		else
         			cout << "NO" << nline;
         	}
         	else
         		cout << "NO" << nline;
        }
    }
    return 0;
}
