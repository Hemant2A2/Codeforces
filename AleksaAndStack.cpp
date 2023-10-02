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
typedef vector<ll> v;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        v seq;
        seq.pb(1);seq.pb(3);seq.pb(5);
        cout << seq[0] << " " << seq[1] << " " << seq[2] << " ";
        ll a = 6;
        for(size_t i = 3; i < n; i++)
        {
            seq.pb(a);
            a++;
        }
        for(size_t i = 3; i < n; i++)
        {
            cout << seq[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}