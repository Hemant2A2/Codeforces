//https://codeforces.com/problemset/problem/158/B?csrf_token=0008f7440b00a6d2f9c699a4aff8114c


#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int x,y,z,w;
    int sum = 0;
    x = y = z = w = 0;
    cin >> n;
    while(n--)
    {
        int g;
        cin >> g;
        if(g == 1){x++;}
        if( g == 2){y++;}
        if( g == 3){z++;}
        if(g == 4){w++;}
    }
    sum = w + min(x,z) + y/2;
    y = y%2;
    if( x > z)
    {
        if(y)
        {
            if( x - z >= 2)
            {
                sum += (x-z-2)/4 + (x-z-2)%4 + 1;
            }
            else
            {
                sum += y ;
            }
        }
        else
        {
            sum += (x-z)/4 + (x-z)%4;
        }
    }
    else
    {
        sum += y + z - x;
    }

    cout << sum << endl;

    return 0;
}