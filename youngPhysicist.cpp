//https://codeforces.com/problemset/problem/69/A

//SOLVED

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,sumx=0,sumy = 0, sumz = 0;
    cin >> n;
    vector<int> pos;
    int m = n*3;
    pos.reserve(m);
    for(int i = 0; i < n; i++)
    {
        int x,y,z;
        cin >> x >> y >> z;
        pos.push_back(x);
        pos.push_back(y);
        pos.push_back(z);
    }
    for( int i = 0 , j =1, k = 2; i < m; i += 3, j += 3,k += 3)
    {
        sumx += pos[i];
        sumy += pos[j];
        sumz += pos[k];
    }

    if( sumx || sumy || sumz)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}