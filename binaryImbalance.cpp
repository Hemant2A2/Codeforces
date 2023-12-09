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
        bool ok = false;
        int cnt1 = 0, cnt0 = 0;
        if(s[0] == '1')
        	cnt1++;
        else
        	cnt0++;
        for(size_t i = 1; i < n; i++)
        {
         	if(s[i] == '1' && s[i-1] == '0')
         		ok = true;
         	else if(s[i] == '0' && s[i-1] == '1')
         		ok = true;
         	else if(s[i] == '0' && s[i-1] == '0')
         		ok = true;
         	if(s[i] == '1')
	        	cnt1++;
	        else
	        	cnt0++;
        }
        if(ok)
        	cout << "YES" << nline;
        else
        {
        	if(cnt0 > cnt1)
        		cout << "YES" << nline;
        	else
        		cout << "NO" << nline;
        }
    }
    return 0;
}
