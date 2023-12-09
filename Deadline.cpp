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
ll n,d;
bool f1(ll m)
{
	if(d%(m+1)==0)
		return m*m + (1-n)*m + d-n <= 0;
	return m*m + (2-n)*m + d-n+1 <= 0;
}

// bool f2(ll m)
// {
// 	if(d%(m+1)==0)
// 		return m*m + (1-n)*m + d-n < 0;
// 	return m*m + (2-n)*m + d-n+1 < 0;
//}

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
        cin >> n >> d;
        ll l = -1, h = n;
        while(l+1 < h)
        {
        	ll m = (l+h)/2;
        	if(f1(m))
        		l = m;
        	else
        		h = m;
        }
        ll L = -1, H = n;
        while(L+1 < H)
        {
        	ll M = (L+H)/2;
        	if(f2(M))
        		H = M;
        	else
        		L = M;
        }
        if(H-l > 1)
        	cout << "YES" << nline;
        else 
        	cout << "NO" << nline;

    }
    return 0;
}
