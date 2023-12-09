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
        ll a,b,c;
        cin >> a >> b >> c;
        v nums;
        nums.pb(a);nums.pb(b);nums.pb(c);
        sort(all(nums));
        bool ok = true;
        if(nums[1]%nums[0] != 0 || nums[2]%nums[0] != 0)
        	ok = false;
        else
        {
        	if((nums[1]/nums[0])  + (nums[2]/nums[0]) - 2 > 3)
        		ok = false;
        }

        if(ok)
        	cout << "YES" << nline;
        else
        	cout << "NO" << nline;

    }
    return 0;
}
