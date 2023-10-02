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
const ll m = 998244353;

ll binmul(ll a, ll b)
{
    a %= m;
    ll ans = 0;
    while (b)
    {
        if (b & 1)
            ans = (ans + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return ans;
}

ll fac(ll n)
{
    ll ans = n;
    while(--n)
    {
        ans = binmul(ans,n);
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll rep=1;
        v diff;
        for(size_t i = 0; i < s.size(); i++)
        {
            if(i== s.size()-1 && rep == 1)
            {
                diff.pb(rep);
                continue;
            }
            if(i != s.size()-1)
            {
                if(s[i]==s[i+1])
                    rep++;
                else
                {
                    diff.pb(rep);
                    rep=1;
                }
            }
            else
            {
                diff.pb(rep);
                continue;
            }
                
            
        }
        ll oper= s.size() - diff.size();
        ll sum =1;
        //ll cnt =0;
        for(size_t i = 0; i < diff.size(); i++)
        {
            // oper += diff[i]-1;
            if(diff[i] != 1)
            {
                sum =  binmul(sum,diff[i]);
            }
        }
        sum = binmul(sum,fac(oper));
        if(!sum)
            sum =1;

        cout << oper << " " << sum << "\n";
    }
     return 0;
}