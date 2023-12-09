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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(k% 2==0)
        {
        	sort(all(s));
        	cout << s << nline;
        }
        else
        {
        	string a="",b="";
        	for(size_t i = 0; i < n; i++)
        	{
        	 	if(i%2)
        	 		b += s[i];
        	 	else
        	 		a += s[i];
        	}
        	sort(all(a));
        	sort(all(b));
        	for(size_t i = 0; i < n; i++)
        	{
        	 	if(i%2)
        	 		s[i] = b[i/2];
        	 	else
        	 		s[i] = a[i/2];
        	}
        	cout << s << nline;
        }
    }
    return 0;
}
