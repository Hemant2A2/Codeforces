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
    cin >> n >>k;
    v nums;
    nums.reserve(n);
    for(size_t i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        nums.pb(a);
    }

    for(size_t i = 0; i < k; i++)
    {
        ll b;
        cin >> b;
        int l = 0, h = n-1;
        bool search = false;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(nums[mid]== b)
            {
                search = true;
                break;
            }
            else if( nums[mid] < b)
                l = mid+1;
            else 
                h = mid-1;
        }

        if(search)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}