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
        cin >> n >>k;
        string s;
        cin >> s;
        int c=0;
        for(size_t i = 0; i < n; i++)
        {
            if(s[i]=='B')
            {
                c++;
                i= i+ k-1;
            }
        }

        cout << c << "\n";
    }
    return 0;
}