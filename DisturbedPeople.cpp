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
    int n;
    cin >> n;
    v light;
    for(size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        light.pb(a);
    }
    
    v dis;
    for(size_t i = 1; i < n-1; i++)
    {
        if((light[i-1] == 1) && (light[i+1] == 1) && (light[i] == 0))
        {
            int indx = i;
            dis.pb(indx);
        }
    }

    int i=0,j=1;
    int k = 0;
    while(j < dis.size())
    {
        if((dis[j]-dis[i]) != 2)
        {
            k++;i++;j++;
        }
        else
        {
            k++;
            i += 2;
            j +=2;
        }
    }
    if(i == dis.size()-1)
        k++;
    
    cout << k ;
    return 0;
}