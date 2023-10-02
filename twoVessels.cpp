#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int m = 0;
        if(a != b)
        {
            int diff = max(a,b) - min(a,b);
            if(diff%(c*2))
            {
                m += diff/(c*2) +1;
            }
            else
            {
                m += diff/(c*2);
            }
        }

        cout << m << "\n";
    }
    return 0;
}