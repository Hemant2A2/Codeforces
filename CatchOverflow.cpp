#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string.h>
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
ll m = pow(2,32) -1;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    //cin >> test;
    while(test--)
    {
        ll l;
        cin >> l;
        ll score = 0;
        bool overflow = false;
        ll add = 1;
        v mul;
        for(ll i = 0; i < l; i++)
        {
         	char c[4];
         	ll val;
         	scanf("%s %lld", c , &val);
         	if(!strcmp(c,"for"))
         	{
         		if(add*val < m)
         		{
         			add *= val;
         			mul.pb(add);
         		}
         		else
         			overflow = true;
         	}
         	else if(!strcmp(c,"add"))
         	{
         		
	     		if(m < (score + add))
	     			overflow = true;
	     		else
	     		{
	     			if(mul.size())
	     			{
	     				score += mul.back();
	     			}
	     			else
	     				score += add;
	     		}
	         	
	         	add = 1;
         	}
         	else
         	{
         		add = 1;
         		if(mul.size())
         			mul.pop_back();
         	}
        }
        if(overflow)
        	cout << "OVERFLOW!!!" << nline;
        else
        	cout << score << nline;
    }
    return 0;
}
