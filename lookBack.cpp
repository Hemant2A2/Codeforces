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
typedef vector<ull> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

bool is_power(ll x)
{
	return x && (!(x & (x - 1)));
}

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
        v arr;
        for(int i = 0; i < n; i++)
        {
         	ull a;
         	cin >> a;
         	arr.pb(a);
        }
        ull oper = 0;
        ull f;
        for(int i = 0; i < n-1; i++)
        {
         	if(arr[i] > arr[i+1])
         	{
         		if(arr[i] % arr[i+1]== 0)
         		{
         			ull k = arr[i]/arr[i+1];
         			if(is_power(k))
         			{
         				f = (ull)(log2(k));
         				arr[i+1] *= (ull)pow(2,f);
         			}
         			else
         			{
         				f = (ull)(log2(k)) + 1;
         				arr[i+1] *= (ull)pow(2,f);
         			}
         		}
         		else
         		{
         			ull k = arr[i]/arr[i+1];
         			f = (ull)(log2(k)) + 1;
         			arr[i+1] *= (ull)pow(2,f);
         		}
         		oper += f;
         	}
        }
        cout << oper << nline;
    }
    return 0;
}
