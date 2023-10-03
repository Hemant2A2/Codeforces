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
typedef vector<ll> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

int main()
{
    //freopen("input.txt", "r" , stdin);freopen("output.txt", "w" , stdout);
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        v p;
        int neg=0;
        ll max = -(1e9 + 1);
        ll esum = 0, osum = 0;
        for(size_t i = 0; i < n; i++)
        {
         	ll c;
         	cin >> c;
         	if(c < 0)
         		neg++;
         	if(max < c)
         		max = c;

         	if(i%2)
         		esum += c > 0 ? c : 0;
         	else
         		osum += c>0 ? c : 0;
        }

        if(neg == n)
        	cout << max << nline;
        else
        {
        	if(esum > osum)
        		cout << esum << nline;
        	else
        		cout << osum << nline;
        }

    }
    return 0;
}
