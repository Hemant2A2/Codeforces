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
    cin >> test;
    while(test--)
    {
        int n,q;
        cin >> n >> q;
        v pr;
        ll sum = 0;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	sum += a;
         	pr.pb(sum);
        }
        for(size_t i = 0; i < q; i++)
        {
         	int l,r;
         	cin >> l >> r;
         	ll k;
         	cin >> k;
         	ll new_sum;
         	if(l > 1)
         		new_sum = sum + k*(ll)(r-l+1) - pr[r-1] + pr[l-2];
         	else
         		new_sum = sum + k*(ll)(r-l+1) - pr[r-1];
         	if(new_sum%2)
         		cout << "YES" << nline;
         	else
         		cout << "NO" << nline;
        }
    }
    return 0;
}
