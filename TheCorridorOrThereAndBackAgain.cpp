#include<iostream>
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
        int m=300;
        for(int i = 0; i < n; i++)
        {
            int d,s;
            cin >> d >> s;
            int ext = d + (s-1)/2;
            m = min(ext,m);
        }

        cout << m << "\n";
    }
    return 0;
}