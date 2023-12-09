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
    //cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >> m;
        ll a1,a2,b1,b2,c1,c2,d1,d2,e1,e2;
        a1 = a2 = b1 = b2 = c1 = c2 = d1 = d2 = e1 = e2 = 0;
        for(int i = 1; i <= n; i++)
        {
         	if(i%5 == 0)
         		a1++;
         	else if(i % 5 == 1)
         		b1++;
         	else if(i % 5 == 2)
         		e1++;
         	else if( i%5 == 3)
         		d1++;
         	else
         		c1++;
        }
        for(int i = 1; i <= m; i++)
        {
         	if(i%5 == 0)
         		a2++;
         	else if(i % 5 == 1)
         		b2++;
         	else if(i % 5 == 2)
         		e2++;
         	else if( i%5 == 3)
         		d2++;
         	else
         		c2++;
        }
        ll total = a1*a2 + b1*c2 + b2*c1 + d1*e2 + d2*e1;
        cout << total ;
    }
    return 0;
}
