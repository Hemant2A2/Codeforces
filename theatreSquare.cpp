//https://codeforces.com/problemset/problem/1/A.      

// SOLVED

#include <iostream>
using namespace std;

int main()
{
    long long int n,m,a,mul;
    cin >> n >> m >> a;
    long long int x = 0;
    if( n > a || m > a)
    {
        if( m % a == 0)
        {
            mul = m/a;
        }
        else
        {
            mul = m/a + 1;
        }
        if( n % a == 0)
        {
            x += n/a * mul;
        }
        else
        {
            x += (n/a + 1) * mul;
        }
        cout << x << endl;
    }
    else
    {
        cout << 1 << endl;
    }
    return 0;
}