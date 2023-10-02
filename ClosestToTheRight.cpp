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
    int n,k;
    cin >> n >> k;
    v nums;
    nums.reserve(n);
    for(size_t i = 0; i < n; i++)
    {
        ll e;
        cin >> e;
        nums.pb(e);
    }
    
    for(size_t i = 0; i < k; i++)
    {
        ll q;
        cin >> q;
        int l = -1,h=n;
        while(l+1<h)
        {
            int m = (l+h)/2;
            if(nums[m] < q)
                l = m;
            else
                h = m;
        }
        cout << h+1 << "\n";//upper bound
    }
    return 0;
}