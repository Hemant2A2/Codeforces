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
typedef vector<string> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        int M[10][10];
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                M[i][j] = 1;
            }
        }

        for(int i = 1; i < 9; i++)
        {
            for(int j = 1; j < 9; j++)
            {
                M[i][j] = 2;
            }
        }

        for(int i = 2; i < 8; i++)
        {
            for(int j = 2; j < 8; j++)
            {
                M[i][j] = 3;
            }
        }

        for(int i = 3; i < 7; i++)
        {
            for(int j = 3; j < 7; j++)
            {
                M[i][j] = 4;
            }
        }

        for(int i = 4; i < 6; i++)
        {
            for(int j = 4; j < 6; j++)
            {
                M[i][j] = 5;
            }
        }

        v target;
        for(int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            target.pb(s);
        }
        int sum=0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                if(target[i][j] == 'X')
                    sum += M[i][j];
            }
        }

        cout << sum << "\n";

    }
    return 0;
}