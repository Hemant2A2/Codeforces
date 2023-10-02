#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int sum =0;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            sum += a;
        }

        if(sum%2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}