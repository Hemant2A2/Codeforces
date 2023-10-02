#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#define pb push_back
#include <string>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s,t;
    cin >> s >> t;
    int flag =0;
    if(s.size() == t.size())
    {
        int sz = s.size();
        for(size_t i = 0; i < sz; i++)
        {
            if(s[i] != t[sz-i-1])
            {
                flag++;
                break;
            }
        }
    }
    else
        flag++;

    if(flag)
        cout << "NO";
    else
        cout << "YES"; 
    return 0;
}