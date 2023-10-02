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
    for(size_t i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        arr1.pb(a);
    }
    v arr2;
    for(size_t i = 0; i < m; i++)
    {
        ll b;
        cin >> b;
        arr2.pb(b);
    }
    int i = 0,j = 0;
    int cnt = 0;
    while(j < m)
    {
        if(arr1[i] < arr2[j] && i < n)
        {
            cnt++;
            i++;
        }
        else
        {
            cout << cnt << " ";
            j++;
        }
    }
    return 0;
}