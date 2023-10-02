#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;
typedef unordered_set<int> us;

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
        us sum;
        for(size_t i = 1; i <= k; i++)
        {
            sum.insert(i);
        }

        for(size_t i = 0; i < n; i++)
        {
            int p;
            cin >> p;
            if(i<k)
                sum.erase(p);
        }

        cout << sum.size() << "\n";
    }
    return 0;
}