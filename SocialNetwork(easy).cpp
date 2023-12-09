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
#ifndef ONLINE_JUDGE
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    //cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >>k;
        set<ll> nums;
        queue<ll> order;
        for(size_t i = 0; i < n; i++)
        {
         	ll a;
         	cin >> a;
         	if(auto search = nums.find(a); search != nums.end())
         		continue;
         	else
         	{
         		nums.insert(a);
         		order.push(a);
         		if(order.size() > k)
         		{
         			nums.erase(order.front());
         			order.pop();
         		}
         	}
        }
        cout << order.size() << nline;
        v vec;
        while(!order.empty())
        {
        	vec.pb(order.front());
        	order.pop();
        }
        reverse(all(vec));
        for(size_t i = 0; i < vec.size(); i++)
        {
         	cout << vec[i] << " ";
        }
        
    }
    return 0;
}
