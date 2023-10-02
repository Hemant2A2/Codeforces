#include<iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string g, r, p;
    cin >> g >> r >> p;
    unordered_map<char,int>name;
    for(int i = 0; i < g.size(); i++)
    {
        if(auto s = name.find(g[i]); s!= name.end())
        {
            name[g[i]]++;
        }
        else
        {
            name.insert({g[i], 1});
        }
    }

    for(int i = 0; i < r.size(); i++)
    {
        if(auto s = name.find(r[i]); s!= name.end())
        {
            name[r[i]]++;
        }
        else
        {
            name.insert({r[i], 1});
        }
    }

    for(int i = 0; i < p.size(); i++)
    {
        name[p[i]]--;
    }

    int f = 0;
    for(auto i = name.begin(); i != name.end(); i++)
    {
        if( i->second != 0)
        {
            f++;
            break;
        }
    }

    if(f)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}