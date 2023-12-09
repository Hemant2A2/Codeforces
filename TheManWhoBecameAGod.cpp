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
        int n,k;
        cin >> n >> k;
        v nums;
        v diff;
        int sum = 0;
        for(size_t i = 0; i < n; i++)
        {
         	int a;
         	cin >> a;
         	nums.pb(a);
        }
        for(size_t i = 0; i < n-1; i++)
        {
         	int d = abs(nums[i+1] - nums[i]);
         	sum += d;
         	diff.pb(d);
        }
        sort(all(diff));
        int rem = 0;
        for(size_t i = 0; i < k; i++)
        {
         	rem += diff[i];
        }
        cout << sum - rem << nline;

    }
    return 0;
}
