#include<iostream>
#include <unordered_map>
using namespace std;
const long long m = 1e9 + 7;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n;
        unordered_map<long long,long long>e;
        cin >> n;
        long long p = 1;
        long int c=0;
        for(int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            
            if(auto search = e.find(a); search != e.end())
            {
                e[a]++;
            }
            else
            {
                e.insert({a,1});
            }
        }
        long long mul;
        if( auto search = e.find(1); search != e.end())
        {
            mul = e[1];
        }
        
        for(auto it = e.begin(); it != e.end(); it++)
        {
            if(it->first != 1)
            {
                long long multi = binpow(it->first,it->second,m);

                p = ((p%m)* multi)%m;
            }
            else
            {
                p = ((p%m)*mul)%m;
            }
        }

        cout << p << endl;
    }
    return 0;
}