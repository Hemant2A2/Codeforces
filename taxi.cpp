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
        int n;
        cin >> n;
        int a=0,b=0,c=0,d=0;
        for(size_t i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            if(s==1)
                a++;
            else if(s==2)
                b++;
            else if(s == 3)
                c++;
            else
                d++;
        }
        if(c == a)
            cout << d + c + b/2 + b%2;
        else if(c > a)
            cout << d + a + b/2 + b%2 + c - a;
        else
        {
            if(b%2)
            {
                if(a -c <= 2)
                    cout << d + c + b/2 + 1;
                else
                {   if((a-c-2)%4)
                        cout << d + c + b/2 + (a-c-2)/4 + 2;
                    else
                        cout << d + c + b/2 + (a-c-2)/4 + 1;
                }
            }
            else
            {   if((a-c)%4)
                    cout << d + c + b/2 + (a-c)/4 + 1;
                else
                    cout << d + c + b/2 + (a-c)/4;
            }
        }

    }
    return 0;
}
