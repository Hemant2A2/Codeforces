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
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> freq;
        if((n-k)%2)
        	k = k+1;
        for(size_t i = 0; i < n; i++)
        {
         	if(auto se = freq.find(s[i]); se != freq.end())
         	{
         		freq[s[i]]++;
         	}
         	else
         	{
         		freq.insert(make_pair(s[i],1));
         	}
        }
        int x = 0, y = 0;
        for(auto i = freq.begin(); i != freq.end(); i++)
        {
         	if((i->ss)%2)
         		x++;
         	else
         		y++;
        }
        if(k - x > 0)
        {
        	if((k-x)%2)
        	{
        		if( y >= (k-x)/2)
        			cout << "yes" << nline;
        		else
        			cout << "no" << nline;
        	}
        	else
        		cout << "no" << nline;
        }
        else if(k - x == 0)
        	cout << "yes" <<nline;
        else
        	cout << "no" << nline;

    }
    return 0;
}
