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
        int n,k;
        cin >> n >> k;
        v tiles;
        int cnt0=0;
        int f;
        for(int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            if(i==0)
                f = c;
            if( f == c && cnt0 < k)
                cnt0++;
            tiles.pb(c);
            
        }
        if(tiles[0] == tiles.back())
        {
            if(cnt0 == k)
                cout << "yes" << "\n";
            else
                cout << "no" << "\n";
        }
        else
        {
            int x = 0;
            for(int i = 0;i < n; i++)
            {
                if(x == k)
                {
                    if(tiles[i] == tiles[0])
                        tiles[i] = 0;
                }
                else
                {
                    if(tiles[i] == tiles[0])
                        x++;
                }
            }
            int flag = 0;
            int cntn= 0;
            for (int i = n-1; i >=0 ; i--)
            {
                if(tiles[i] == tiles.back())
                    cntn++;
                if( cntn == k)
                    break;
                if(cntn < k && tiles[i] == tiles[0])
                {
                    flag++;
                    break;
                }
                
            }
            if(cntn < k || cnt0 < k)
                flag++;
            
            if(flag)
                cout << "no" << "\n";
            else
                cout << "yes" << "\n";
        }
    }
    return 0;
}