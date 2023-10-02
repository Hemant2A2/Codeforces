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
typedef unordered_set<string> us;

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
        string s;
        cin >> s;
        us melody;
        string add = "";
        for(size_t i = 0; i < n; i++)
        {
            add += s[i];
            if( add.size() == 2)
            {
                melody.insert(add);
                add = "";
                i--;
            }
        }

        cout << melody.size() << "\n";
    }
    return 0;
}