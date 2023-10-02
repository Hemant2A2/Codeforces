#include<iostream>
#include <map>

using namespace std;
const long m = 998244353;

long  binexp(long long a, long  b, long  m)
{
    a %= m;
    long long  ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<long,int>f1;
    for(int i = 0; i < n; i++)
    {
        long a;
        cin >> a;
        f1.insert({a,0});
    }
    auto it = f1.begin();
    for(int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        it->second = b;
        it++;
    }

    int k;
    cin >> k;
    map<long,int>f2;
    for(int i = 0; i < k; i++)
    {
        long c;
        cin >> c;
        f2.insert({c,0});
    }
    auto itr = f2.begin();
    for(int i = 0; i < k; i++)
    {
        int d;
        cin >> d;
        itr->second = d;
        itr++;
    }
    int f = 0;
    for(auto i = f2.begin();i != f2.end();i++)
    {
        if(auto search = f1.find(i->first); search != f1.end())
        {
            f1[i->first] = f1[i->first] - f2[i->first];
            if(f1[i->first] < 0)
            {
                f++;
                break;
            }
        }
        else
        {
            f++;
            break;
        }
    }
    if(f)
    {
        cout << 0 << endl;
    }
    else
    {
        long count = 0;
        for(auto it = f1.begin(); it != f1.end(); it++)
        {
            if(it->second > 0)
            {
                count++;
            }
        }
        cout << binexp(2,count, m) << endl;

    }


    return 0;
}