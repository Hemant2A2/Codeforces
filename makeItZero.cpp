#include<iostream>
#include <unordered_set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        unordered_set<int>e;
        int ans;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if(i==0)
                ans = a;
            else
                ans = ans^a;

            e.insert(a);
        }
        if(ans)
        {
            if(n%2==0)
            {
                cout << 2 << "\n";
                cout << 1 << " " << n << "\n";
                cout << 1 << " " << n << "\n";
            }
            else
            {
                cout << 3 << "\n";
                cout << 1 << " " << n-1 << "\n";
                cout << n-1 << " " << n << "\n";
                cout << n-1 << " " << n << "\n";
            }
        }
        else
        {
            if(e.size() > 1)
            {
                cout << 1 << "\n";
                cout << 1 << " " << n << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
            
    }
    return 0;
}