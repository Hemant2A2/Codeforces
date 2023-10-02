#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <stack>
using namespace std;
#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef vector<string> vs;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    

    while(t--)
    {
        stack<char> vika;
        vika.push('a');vika.push('k');vika.push('i');vika.push('v');
        int n,m;
        cin >> n >> m;
        vs carpet;
        for(int i = 0; i < n; i++)
        {
            string row;
            cin >> row;
            carpet.pb(row);
        }

        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(vika.top() == carpet[j][i])
                {
                    vika.pop();
                    break;
                }
            }
        }

        if(vika.empty())
            cout << "YES"<< "\n";
        else
            cout << "NO" << "\n";

    }
    return 0;
}