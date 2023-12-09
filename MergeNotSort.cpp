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
        int nums[2*n]
        int max1= 0,min2 = 2*n +1,max2 = 0;
        for(size_t i = 0; i < n*2; i++)
        {
        	cin >> nums[i];
        	if(i < n)
        	{
        		if(max1 < nums[i])
        			max1 = nums[i];
        	}
        	else
        	{
        		if(min2 > nums[i])
        			min2 = nums[i];
        		if(max2 < nums[i])
        			max2 = nums[i];

        	}
        }
        if(max1 < min2)
        {
        	for(size_t i = 0; i < n; i++)
        		cout << nums[i] << " ";
        	cout << nline;
        	for(size_t i = n; i < n*2; i++)
        		cout << nums[i] << " ";
        	cout << nline;
        }
        else if(max1 > max2)
        	cout << -1 << nline;
        else
        {
        	int pairs = 0;
        	for(size_t i = 0; i < n*2-1; i++)
        	{
        		if(nums[i+1] < nums[i])
        	}
        }
    }
    return 0;
}
