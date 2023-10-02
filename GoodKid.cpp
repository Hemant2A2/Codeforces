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
typedef vector<ll> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        v nums;
        for(int i = 0; i < n; i++)
        {
            ll a;
            cin>> a;
            nums.pb(a);
        }
        sort(nums.begin(), nums.end());
        ll prod = 1;
        nums[0]++;
        for(int i = 0; i < n; i++)
        {
            prod *= nums[i];
        }
        cout << prod << "\n";
    }
    return 0;
}