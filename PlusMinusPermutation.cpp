#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define nline "\n"
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

ll gcd(ll a , ll b)
{
    while(b)
    {
        a %= b;
        swap(a,b);
    }
    return a;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        ll n,x,y;
        cin >> n >> x >> y;
        if(x != y)
        {
            ll p = n/x;
            ll ne = n/y;
            ll lcm = (x*y)/gcd(x,y);
            ll sub = n/lcm;
            p -= sub;
            ne -= sub;
            ll sump = n*p - (p * (p-1))/2;
            ll sumn = (ne * (ne + 1))/2;
            // for(ll i = 0; i < p; i++)
            // {
            //     sump += n-i;
            // }
            // for(ll i = 1; i <= ne; i++)
            // {
            //     sumn += i;
            // }
            cout << sump - sumn << nline;
        }
        else
            cout << 0 << nline;

    }
    return 0;
}
