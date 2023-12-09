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
#define all(x) (x).rbegin(),(x).rend()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;
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
        cin>>n;
        int freq[n+1];
        for(size_t i = 0; i <= n; i++)
        {
         	freq[i] = 0;
        }
        for(size_t i = 0; i < n-1; i++)
        {
         	int u,v;
         	cin >> u >> v;
         	
        }

        int q;
        cin >> q;
        for(size_t i = 0; i < q; i++)
        {
         	int x,y;
         	cin >> x >> y;
         	cout << (ll)freq[x] * (ll)freq[y] << nline;
        }
    }
    return 0;
}
