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
        int arr[n+1];
        arr[0] = -1;
        for(size_t i = 0; i < n; i++)
        {
         	int p;
         	cin >> p;
         	arr[p] = i;
        }
        int oper = 0;
        for(size_t i = 1; i < n; i++)
        {
         	if(arr[i] - arr[i+1] >= 1)
         		oper++;
        }

        cout << oper << nline;
    }
    return 0;
}
