#include<iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <utility>
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
    int r,b;
    cin >> r >> b;
    int p=0,va=0;
    v cubes;
    int n = r+b;
    cubes.reserve(n);
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
        {
            if(r >=b)
            {
                cubes.pb(1);
                r--;
            }
            else
            {
                cubes.pb(0);
                b--;
            }
        }
        else
        {
            if(i%2)
            {
                if(cubes[i-1] == 1)
                {
                    if(b >0)
                    {
                        cubes.pb(0);
                        b--;
                        va++;
                    }
                    else
                    {
                        cubes.pb(1);
                        r--;
                        p++;
                    }
                }
                else
                {
                    if(r>0)
                    {
                        cubes.pb(1);
                        r--;
                        va++;
                    }
                    else
                    {
                        cubes.pb(0);
                        b--;
                        p++;
                    }
                }
            }
            else
            {
                if(cubes[i-1] == 1)
                {
                    if(r >0)
                    {
                        cubes.pb(1);
                        r--;
                        p++;
                    }
                    else
                    {
                        cubes.pb(0);
                        b--;
                        va++;
                    }
                }
                else
                {
                    if(b>0)
                    {
                        cubes.pb(0);
                        b--;
                        p++;
                    }
                    else
                    {
                        cubes.pb(1);
                        r--;
                        va++;
                    }
                }
            }
        }
    }

    cout << p << " " << va ;
    return 0;
}