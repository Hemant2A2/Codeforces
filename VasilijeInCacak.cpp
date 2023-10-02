#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(),(x).end()
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
        ull n,k,x;
        cin >> n >> k >> x;
        ull ub = ((n*(n+1))  - ((n-k)*(n-k+1)))/2;
        ull lb = (k*(k+1))/2;
        if(x <= ub && x >= lb)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}