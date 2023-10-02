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
        int n,m,k,h;
        cin >> n >> m >>k >> h;
        us d;
        for(int i = 1; i < m; i++)
        {
            d.insert(k*i);
        }
        int cnt=0;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            int diff = abs(h-a);
            if(auto s = d.find(diff); s != d.end())
            {
                cnt++;
            }
        }

        cout << cnt << "\n";

    }
    return 0;
}