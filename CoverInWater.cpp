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
        string s;
        cin >> s;
        v hash;
        int ans = 0;
        for(size_t i = 0; i < n; i++)
        	if(s[i] == '#')
        		hash.pb(i);
        if(hash.size())
        {
        	v diff;
        	diff.pb(hash[0]);
	        for(size_t i = 1; i < hash.size(); i++)
	        	diff.pb(hash[i] - hash[i-1]-1);
	        diff.pb(n - hash.back()-1);
	        for(size_t i = 0; i < diff.size(); i++)
	        {
	         	if(diff[i] == 1)
	         		ans++;
	         	if(diff[i]== 2)
	         		ans += 2;
	         	if(diff[i] > 2)
	         	{
	         		ans = 2;
	         		break;
	         	}

	        }

	        cout << ans << nline;
	    }
	    else
	    {  	if(n >= 2)
	    		cout << 2 << nline;
	    	else
	    		cout << 1 << nline;
	    }
    }
    return 0;
}
