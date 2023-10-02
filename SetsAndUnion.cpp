#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
using namespace std;
#include <set>
#include <unordered_set>
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef unordered_set<int> us;
typedef vector<int> v;
typedef vector<us> vs;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vs sets;
        us m;
        for(size_t i = 0; i < n; i++)
        {
            us s;
            int k;
            while(cin >> k)
            {
                s.insert(k);
                m.insert(k);
            }
            sets.pb(s);
        }
        int sz = m.size();
        v elem;
        for(size_t i = 0; i < n; i++)
        {
            us sample;
            for(auto it = sets[i].begin();it != sets[i].end();it++)
            {
                sample.insert(*it);
            }
            for(size_t j = 1; j < n; j++)
            {
                for(auto it = sets[j].begin();it != sets[j].end();it++)
                {
                    sample.insert(*it);
                }
            }
            
        }

    }
    return 0;
}