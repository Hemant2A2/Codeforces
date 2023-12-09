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
        int n;
        cin >> n;
        if(n == 1)
        	cout << 1 << nline;
        else if(n==2)
        	cout << -1 <<nline;
        else
        {
        	int m[n][n];
        	int a , b;
        	a = b = 0;
        	stack<int>A,B;
        	A.push(0); B.push(0);
        	int k = 1;
        	int turn = 1;
        	while(a < n && b < n)
        	{
        		for(int i = a , j = b; i < n && j <  n ; i++,j++)
        			m[i][j] = k++;
        		if(turn%2)
        		{
        			int temp = A.top() +1;
        			A.push(temp);
        			a = A.top();
        			b = 0;
        			turn++;
        		}
        		else
        		{
        			int temp = B.top()+1;
        			B.push(temp);
        			b = B.top();
        			a = 0;
        			turn++;
        		}
        	}

        	for(int i = 0; i < n; i++)
        	{
        	 	for(int j = 0; j < n; j++)
        	 	{
        	 	 	cout << m[i][j] << " ";
        	 	}
        	 	cout << nline;
        	}
        }
    }
    return 0;
}
