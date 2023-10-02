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
typedef vector<long> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        v weights;
        v l;
        v r;
        long suml=0, sumr=0;
        for(size_t i = 0; i < n; i++)
        {
            long w;
            cin >> w;
            weights.pb(w);
            suml += w;
            l.pb(suml);
        }
        for(size_t i = n-1; i >=0; i--)
        {
            sumr += weights[i];
            r.pb(sumr);
        }

        long c = 0;
        for(long i = 0; i < l.size(); i++)
        {
            auto j = lower_bound(r.begin(), r.begin() + n - i, l[i]);
            if( j != r.end())
                c = max(c, i + *j + 2);
        }

        cout << c << "\n";
    }
    return 0;
}