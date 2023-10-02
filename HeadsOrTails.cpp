#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,a,b;
    cin >> x >> y >> a >> b;

    int a1;
    if(a<=b+1)
        a1 = b+1;
    else
        a1 = a;
    int t=0;

    if(y >= x-1)
    {
        for(int i = a1,j=1; i <= x; i++,j++)
        {
            t += i*j;
        }
        cout << t << "\n";
        
        while(a1 <= x)
        {
            int b1 = b;
            while(b1 < a1)
            {
                cout << a1 << " " << b1 << "\n";
                b1++;
            }
            a1++;
        }
    }
    else
    {

    }
    return 0;
}