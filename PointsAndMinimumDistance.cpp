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
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        v points;
        for(size_t i = 0; i < n*2; i++)
        {
         	ll a;
         	cin >> a;
         	points.pb(a);
        }
        sort(all(points));
        v left,right;
        int sum = 0;
        left.pb(points[0]);
        for(size_t i = 1; i < n; i++)
        {
         	sum += abs(points[i] - points[i-1]);
         	left.pb(points[i]);
        }
        right.pb(points[n]);
        for(size_t i = n+1; i < n*2; i++)
        {
         	sum += abs(points[i] - points[i-1]);
         	right.pb(points[i]);
        }
        cout << sum << nline;
        for(size_t i = 0; i < n; i++)
        {
         	cout << left[i] << " " << right[i] << nline;
        }
    }
    return 0;
}
