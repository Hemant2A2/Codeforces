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
        int n;
        cin >> n;
        v a,b;
        a.reserve(n);
        for(size_t i = 0; i < n; i++)
        {
         	int r;
         	cin >> r;
         	a.pb(r);
        }
        int m;
        cin >> m;
        b.reserve(m);
        for(size_t i = 0; i < m; i++)
        {
         	ll c;
         	cin >> c;
         	b.pb(c);
        }

        int i= 0,j=0;
        int sum = 0,msum= 0;
        while(i<n && j < m)
        {
        	if(a[i] >= 0)
        		sum += a[i];
        	if(b[j] >=0 )
        		sum += b[j];
        	msum = max(msum ,sum);
        	if(a[i] < 0)
        		sum += a[i];
        	if(b[j] < 0)
        		sum += b[j];
        	i++;j++;
        }
        for(i; i< n;i++)
        {
        	if(a[i] >= 0)
        		sum += a[i];
        	msum = max(msum ,sum);
        	if(a[i] < 0)
        		sum += a[i];
        }

        for(j;j < m;j++)
        {
        	if(b[j] >=0 )
        		sum += b[j];
        	msum = max(msum ,sum);
        	if(b[j] < 0)
        		sum += b[j];
        }

        cout << msum << nline;
    }
    return 0;
}

