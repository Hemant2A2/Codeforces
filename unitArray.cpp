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
        int x=0,y=0,oper=0;
        for(size_t i = 0; i < n; i++)
        {
         	int a;
         	cin >> a;
         	if(a == 1)
         		x++;
         	else
         		y++;
        }
        if(x < y)
        {
        	oper += (y-x)/2 + (y-x)%2;
        	 y -= (y-x)/2 + (y-x)%2;
        }
        if(y%2 == 0)
        	cout << oper << nline;
        else
        	cout << oper + 1 << nline;
    }
    return 0;
}
