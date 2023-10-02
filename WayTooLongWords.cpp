#include<iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int sz = s.size();
        if(sz>10)
        {
            cout << s[0] << sz-2 << s[sz-1] << "\n";
        }
        else
        {
            cout << s << "\n";
        }
    }
    return 0;
}