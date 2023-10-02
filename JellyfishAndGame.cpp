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
typedef vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        ull k;
        cin >> k;
        ull maxj =0, maxg = 0;
        ull minj = 1e9 + 1, ming = 1e9 + 1;
        ull sum = 0;
        for(size_t i = 0; i < n; i++)
        {
            ull a;
            cin >> a;
            sum += a;
            if(maxj < a)
                maxj = a;
            if(minj > a)
                minj = a;
        }

        for(size_t i = 0; i < m; i++)
        {
            ull b;
            cin >> b;
            if(maxg < b)
                maxg = b;
            if(ming > b)
                ming = b;
        }

        if(k%2)
        {
            if(minj < maxg)
                cout << sum - minj + maxg << "\n";
            else
                cout << sum << "\n";
        }
        else
        {   if(minj > maxg)
            {
                cout << sum - maxj + ming << "\n";
            }
            else
                cout << sum + min(maxg,maxj) + min(ming,minj) - minj - maxj << "\n";
        }
    }

    return 0;
}