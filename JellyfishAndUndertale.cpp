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
typedef unordered_map<int,int> um;

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
        ll a, b;
        cin>> a >> b;
        int n;
        cin >> n;
        ll total = 0;
        if(b > 1)
        	total += b-1;
        v tools;
        tools.reserve(n);
        for(size_t i = 0; i < n; i++)
        {
         	int x;
         	cin >> x;
         	tools.pb(x);
        }
        sort(all(tools));
        for(size_t i = 0; i < n-1; i++)
        {
            if( 1+tools[i] <=a)
                total += tools[i];
            else
                total += a-1;
        }
        if( 1+tools.back() <=a)
                total += tools.back()+1;
            else
                total += a;

        cout << total << nline;
    }
    return 0;
}
