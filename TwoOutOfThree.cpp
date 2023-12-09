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
        v arr;
        map<int,int> freq;
        for(size_t i = 0; i < n; i++)
        {
         	int a;
         	cin >> a;
         	arr.pb(a);
         	if(auto s = freq.find(a); s != freq.end())
         		freq[a]++;
         	else
         		freq.insert(make_pair(a,1));
        }
        v vec;
        for(auto it = freq.begin(); it != freq.end(); it++)
        {
        	if(it->ss > 1)
        	{
        		if(vec.size() < 2)
        			vec.pb(it->ff);
        	}
        }
        if(vec.size() == 2)
        {
        	int x=1,y=1;
        	for(size_t i = 0; i < n; i++)
        	{
        	 	if(arr[i] == vec[0])
        	 	{
        	 		if(x==1)
        	 		{
        	 			cout << 1 << " ";
        	 			x++;
        	 		}
        	 		else if( x == 2)
        	 		{
        	 			cout << 2 << " ";
        	 			x++;
        	 		}
        	 		else
        	 			cout << 1 << " ";
        	 	}
        	 	else if(arr[i] == vec[1])
        	 	{
        	 		if(y==1)
        	 		{
        	 			cout << 1 << " ";
        	 			y++;
        	 		}
        	 		else if( y == 2)
        	 		{
        	 			cout << 3 << " ";
        	 			y++;
        	 		}
        	 		else
        	 			cout << 1 << " ";
        	 	}
        	 	else
        	 		cout << 1 << " ";
        	}
        	cout << nline;
        }
        else
        	cout << -1 << nline;
    }
    return 0;
}
