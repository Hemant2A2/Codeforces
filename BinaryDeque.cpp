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
        int n,s;
        cin >> n >> s;
        v bin;
        for(size_t i = 0; i < n; i++)
        {
         	int a;
         	cin >> a;
         	bin.pb(a);
        }
        int total = 0;
        deque<int>idx;
        for(size_t i = 0; i < n; i++)
        {
         	if(bin[i] == 1)
         	{
         		total++;
         		idx.pb(i);
         	}
        }
        
        if(s > total)
        	cout << -1 << nline;
        else
        {
        	int i = -1,j = n;
        	while(s != total)
        	{
        		if(abs(idx.front()- i) <= abs(idx.back()- j))
        		{
        			i = idx.front();
        			idx.pop_front();
        		}
        		else
        		{
        			j = idx.back();
        			idx.pop_back();
        		}
        		total--;
        	}
        	cout << i+1 + n-j << nline;
        }
    }
    return 0;
}
