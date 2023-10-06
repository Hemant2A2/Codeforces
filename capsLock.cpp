#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define nline "\n"
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    //cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        if(s.size() > 1)
        {
            bool ok = true;
            for(size_t i = 1; i < s.size(); i++)
            {
                if(s[i] != toupper(s[i]))
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
            {
                if(s[0] == toupper(s[0]))
                    s[0] = tolower(s[0]);
                else
                    s[0] = toupper(s[0]);
                for(size_t i = 1; i < s.size(); i++)
                {
                    s[i] = tolower(s[i]);
                }
                cout << s;
            }
            else
                cout << s;
        }
        else
        {
            if(s[0] == toupper(s[0]))
                s[0] = tolower(s[0]);
            else
                s[0] = toupper(s[0]);

            cout << s;
        }
    }
    return 0;
}
