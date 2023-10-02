#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#define pb push_back
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    v p;
    for(size_t i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        p.pb(a);
    }

    sort(p.begin(),p.end());
    int diff;
    for(size_t i = 0; i <= m-n; i++)
    {
        if(i==0)
        {
            diff = p[i+n-1] - p[i];
        }
        else
        {
            if(diff > p[i+n-1] - p[i])
            {
                diff = p[i+n-1] - p[i];
            }
        }
    }

    cout << diff;
    return 0;
}