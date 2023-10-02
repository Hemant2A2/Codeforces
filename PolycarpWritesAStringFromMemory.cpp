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
typedef unordered_set<char> us;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        us letters;
        int days = 0;
        int n = s.size();
        for(size_t i = 0; i < n; i++)
        {
            letters.insert(s[i]);
            if(letters.size() > 3)
            {
                letters.clear();
                --i;
                days++;
            }
            else
            {
                if(i==n-1)
                    days++;
            }
        }
        cout << days << "\n";
    }
    return 0;
}