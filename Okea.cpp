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
        int prod = n*k;
        if(prod%2)
        {
        	if(k == 1)
        	{
        		cout << "YES" << nline;
        		for(int i = 1; i <= n; i++)
        			cout << i << nline;
        	}
        	else
        		cout << "NO" << nline;
        }
        else
        {
        	if(n%2)
        		cout << "NO" << nline;
        	else
        	{
        		cout << "YES" << nline;
        		int odd = -1;
        		int even = 0;
        		for(int i = 1; i <= n/2; i++)
        		{
        		 	for(int j = 1; j <= k; j++)
        		 	{
        		 		cout << odd + 2 << " ";
        		 		odd = odd + 2;
        		 	}
        		 	cout << nline;
        		}
        		for(int i = 1; i <= n/2; i++)
        		{
        		 	for(int j = 1; j <= k; j++)
        		 	{
        		 		cout << even + 2 << " ";
        		 		even = even + 2;
        		 	}
        		 	cout << nline;
        		}
        	}
        }
    }
    return 0;
}
