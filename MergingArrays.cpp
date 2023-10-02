#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    v arr1;
    v arr2;
    for(size_t i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr1.pb(a);
    }
    for(size_t i = 0; i < m; i++)
    {
        ll b;
        cin >>b;
        arr2.pb(b);
    }
    v arr3;
    int i=0,j=0;
    while(i < n && j < m)
    {
        if(arr1[i] <= arr2[j])
        {
            arr3.pb(arr1[i]);
            i++;
        }
        else
        {
            arr3.pb(arr2[j]);
            j++;
        }
    }
    if(i==n)
    {
        while(j<m)
        {
            arr3.pb(arr2[j]);
            j++;
        }
    }
    else
    {
        while(i<n)
        {
            arr3.pb(arr1[i]);
            i++;
        }
    }

    for(size_t i = 0; i < n+m; i++)
    {
        cout << arr3[i] << " ";
    }

    
    return 0;
}