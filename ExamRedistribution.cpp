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
    int n;
    cin >> n;
    v rooms;
    rooms.reserve(n);
    for(size_t i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        rooms.pb(s);
    }
    sort(rooms.rbegin(), rooms.rend());
    int fir = rooms[0];
    int sum = 0;
    for(size_t i = 1; i < n; i++)
    {
        sum += rooms[i];
    }
    if( sum >= fir)
    {
        for(size_t i = 0; i < n; i++)
        {
            cout << rooms[i] << " ";
        }
    }
    else
        cout << "impossible";
    return 0;
}