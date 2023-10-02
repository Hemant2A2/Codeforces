#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int min = 100001;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if(abs(a) < min )
        {
            min = abs(a);
        }
    }

    cout << min;
    cout << "\n";

    return 0;
}