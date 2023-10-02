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
        int n,k;
        cin >> n >> k;
        bool ans = false;
        for(size_t i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if(a == k)
                ans = true;
        }

        if(ans)
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    return 0;
}