#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
using namespace std;
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int m = n*2;
    v nums;
    for(size_t i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        nums.pb(a);
    }

    sort(nums.begin(), nums.end());
    int sum1=0,sum2=0;
    for(size_t i = 0 , j = n; i < n; i++, j++)
    {
        sum1 += nums[i];
        sum2 += nums[j];
    }

    if(sum1 != sum2)
    {
        for(size_t i = 0; i < m; i++)
        {
            cout << nums[i] << " ";
        }
    }
    else
        cout << -1;
    return 0;
}