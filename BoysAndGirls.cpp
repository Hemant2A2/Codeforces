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
typedef vector<char> v;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    int M = max(n,m);
    v line(M*2,'x');
    if(M == n)
    {
        for(size_t i = 0; i < n*2; i +=2)
        {
            line[i] = 'B';
        }
        for(size_t i = 1; i < m*2; i+=2)
        {
            line[i] = 'G';
        }
    }
    else
    {
        for(size_t i = 0; i < m*2; i +=2)
        {
            line[i] = 'G';
        }
        for(size_t i = 1; i < n*2; i+=2)
        {
            line[i] = 'B';
        }
    }

    for(size_t i = 0; i < M*2; i++)
    {
        if(line[i] != 'x')
            cout << line[i];
    }
    return 0;
}