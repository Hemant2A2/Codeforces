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
        string s;
        cin>> s;
        if( s == "abc" || s == "bac" || s == "cba" || s == "acb")
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    
    return 0;
}