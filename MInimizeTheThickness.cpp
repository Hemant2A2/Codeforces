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
#define all(x) (x).rbegin(),(x).rend()
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
        int sum = 0;
        v pre_sum;
        map<int,int> mul;
        for(size_t i = 0; i < n; i++)
        {
         	int a;
         	cin >> a;
         	sum += a;
         	pre_sum.pb(sum);
         	mul.insert(make_pair(sum,i));
        }
        v gap,min;
        for(size_t i = 0; i < n; i++)
        {
        	bool ok = true;
        	v temp;
         	if(pre_sum.back() % pre_sum[i] == 0)
         	{
         		for(int j = 1; j <= pre_sum.back()/pre_sum[i] ; j++)
         		{
         		 	if(auto s = mul.find(j*pre_sum[i]); s != mul.end())
         		 		temp.pb(s->ss);
         		 	else
         		 	{
         		 		ok = false;
         		 		break;
         		 	}
         		}
         		if(ok && temp.size())
         		{
         			gap.pb(temp[0] + 1);
         			for(size_t i = 1; i < temp.size(); i++)
         			{
         			 	gap.pb(temp[i] - temp[i-1]);
         			}
         			sort(all(gap));
         			min.pb(gap[0]);
         			gap.clear();
         		}
         		temp.clear();
         	}
        }
        if(min.size())
        {
	        sort(all(min));
	        cout << min.back() << nline;
	    }
	    else
	    	cout << n << nline;
    }
    return 0;
}
