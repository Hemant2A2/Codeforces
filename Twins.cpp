#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#define pb push_back
#include <string>
using namespace std;
typedef long long ll;
typedef vector<int> v;
typedef unsigned long long ull;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int sum = 0;
    int m = 0;
    v money;
    for(size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        sum += a;
        money.pb(a);
    }

    sort(money.rbegin(), money.rend());

    int j=0;
    for( j = 0; j < n; j++)
    {
        m += money[j];
        if(sum -m < m)
            break;
    }

    cout << j+1;
    return 0;
}