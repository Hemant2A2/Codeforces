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
        string a,b;
        cin >> a >> b;
        int n = a.size();
        bool ok = true;
        int f = -1, l = -1;
        for(size_t i = 1; i < n-1; i++)
        {
         	if(a[i] == '0' && b[i] == '0')
         		f = i;
         	else if(a[i] == '1' && b[i] == '1')
	         	l = i;
        }
        if(f == -1 && l != 1)
	        ok = false;
	    else if( l == -1 && f != n-2)
	    	ok = false;
	    else if(f < l)
	    {
	    	if(f != l-1)
	    		ok = false;
	    }
	    else
	    {
	    	if(f != n-2 || l != 1)
	    		ok = false;
	    }
        if(ok)
        	cout << "YES" << nline;
        else
        	cout << "NO" << nline;
    }
    return 0;
}
