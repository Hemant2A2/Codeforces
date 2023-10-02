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
typedef vector<pair<int,int> > v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s,n;
    cin >> s >> n;
    v drag;
    for(size_t i = 0; i < n; i++)
    {
        pair<int,int>lvl;
        int x,y;
        cin >> x >> y;
        lvl.first = x;
        lvl.second = y;
        drag.pb(lvl);
    }

    sort(drag.begin(), drag.end());

    int fail = 0;
    for(size_t i = 0; i < n; i++)
    {
        if(s - drag[i].first > 0)
            s += drag[i].second;
        else
        {
            fail++;
            break;
        }
    }

    if(fail)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}