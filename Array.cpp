#include<iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>p,ne,z;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(a==0)
            z.push_back(a);
        else if(a>0)
            p.push_back(a);
        else
            ne.push_back(a);
    }
    if(p.size() == 0)
    {
        int sz = ne.size();
        cout << sz-2 << " ";
        for(int i = 0; i < sz-2 ; i++)
        {
            cout << ne[i] << " ";
        }
        cout << "\n";

        cout << 2 << " ";
        cout << ne[sz-2] << " " << ne[sz-1] << "\n";

        cout << 1 << " " << 0 ;
    }
    else
    {
        if(ne.size()%2)
        {
            int sz = ne.size() - 1;
            cout << sz << " ";
            for(int i = 0; i < sz -1; i++)
            {
                cout << ne[i] << " ";
            }
            cout << "\n";

            for(int i = 0; i < p.size(); i++)
            {
                cout << p[i] << " ";
            }
            cout << "\n";

            cout << 1 << " " << 0 << " " << ne[sz-1];
        }
        else
        {
            cout << ne.size() << " ";
            for(int i = 0; i < ne.size(); i++)
            {
                cout << ne[i] << " ";
            }
            cout << "\n";

            cout << p.size() << " ";
            for(int i = 0; i < p.size(); i++)
            {
                cout << p[i] << " ";
            }
            cout << "\n";

            cout << 1 << " " << 0 ;
        }
    }
    return 0;
}