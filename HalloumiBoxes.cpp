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
        v nums,copy;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	copy.pb(a);
         	nums.pb(a);
        }
        if(k >=2 )
        	cout << "YES" << nline;
        else
        {
        	sort(all(nums));
        	bool ok = true;
        	for(size_t i = 0; i < n; i++)
        	{
        	 	if(nums[i] != copy[i])
        	 	{
        	 		ok = false;
        	 		break;
        	 	}
        	}
        	if(ok)
        		cout << "YES" << nline;
        	else
        		cout << "NO" << nline;
        }
    }
    return 0;
}
