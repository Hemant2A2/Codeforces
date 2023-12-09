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
        cin>> n;
        string s;
        cin >> s;
        bool startA = false, startB = false;
        int k = -1,l= -1;
        bool ok = false;
        int ans = 0;
        int cnt = 0;
        for(size_t i = 0; i < n; i++)
        {
         	if(s[i] == 'A' && !startB)
         	{
         		if(!startA)
         			k = 0;
         		startA = true;
         	}
         	else if(s[i] == 'A' && startB && startA)
         	{
         		ans += k + l -1;
         		if(ok)
         			cnt ++;
         		ok = true;
         		startB = false;
         		startA = true;
         		k = 0; l = -1;
         	}
         	else if(s[i] == 'A' && startB && !startA)
         	{
         		startB = false;
         		startA = true;
         		k = 0; l = -1;
         	}
         	if( s[i] == 'B')
         	{
         		if(!startB)
         			l = 0;
         		startB = true;
         	}
         	if(startA && !startB)
         		k++;
         	if(startB)
         		l++;
        }
        if(startA && startB)
        {
        	ans += k +l -1;
        	if(ok)
        		cnt++;
        }

        cout << ans+cnt << nline;
    }
    return 0;
}
