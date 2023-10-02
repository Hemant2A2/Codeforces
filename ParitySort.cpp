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
            cin >> a;
            nums.pb(a);
        }
        v cpy;
        for(int i = 0; i < n; i++)
        {
            cpy.pb(nums[i]);
        }

        sort(cpy.begin(), cpy.end());
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if( cpy[i]%2 != nums[i]%2)
            {
                flag++;
                break;
            }
        }

        if(flag)
            cout << "no" << "\n";
        else
            cout << "yes" << "\n";
    }
    return 0;
}