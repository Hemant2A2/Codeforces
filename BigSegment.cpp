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
typedef vector<pair<long,long> > v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long min,max;
    v seg;
    for(int i = 0; i < n; i++)
    {
        long l,r;
        cin >> l >> r;
        pair<long,long> p;
        p.first= l;
        p.second = r;
        seg.pb(p);
        if(i==0)
        {
            min = l; max = r;
        }
        else
        {
            if(l < min)
            {
                min = l;
            }
            if( r > max)
            {
                max = r;
            }
        }
    }
    int index = -1;
    for(size_t i = 0; i < seg.size(); i++)
    {
        if(min == seg[i].first && max == seg[i].second)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        cout <<  index + 1;
    }
    else
        cout << -1;

    
    return 0;
}