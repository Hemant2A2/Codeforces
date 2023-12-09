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
typedef vector<pair<int,char> > vp;
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
        string s;
        cin >> s;
        stack<pair<int,char> >up,lw;
        pair<int,char>p;
        for(size_t i = 0; i < s.size(); i++)
        {
         	if(s[i] >= 'A' && s[i] <= 'Z')
         	{
         		if(s[i] == 'B')
         		{
         			if(!up.empty())
         				up.pop();
         		}
         		else
         		{
         			p.ss = s[i];
         			p.ff = i;
         			up.push(p);
         		}
         	}
         	else
         	{
         		if(s[i] == 'b')
         		{
         			if(!lw.empty())
         				lw.pop();
         		}
         		else
         		{
         			p.ss = s[i];
         			p.ff = i;
         			lw.push(p);
         		}
         	}
        }
        vp ans;
        while(!up.empty())
        {
        	ans.pb(up.top());
        	up.pop();
        }
        while(!lw.empty())
        {
        	ans.pb(lw.top());
        	lw.pop();
        }
        sort(all(ans));
        for(size_t i = 0; i < ans.size(); i++)
        	cout << ans[i].ss;
        cout << nline;
    }
    return 0;
}
