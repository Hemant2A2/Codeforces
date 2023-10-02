#include<iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string x;
        cin >> x;
        int n = x.size();
        int index = -1;
        
        for(int i = 0; i < n; i++)
        {
            if(x[i] >= '5')
            {
                index = i;
                break;
            }
        }

        int c=0;
        if(index != -1)
        {
            for(int i = index-1; i >= 0; i--)
            {
                if(x[i] == '4')
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            if( index-c)
            {
                x[index-1-c]++;
                for(int i = index-c; i < n; i++)
                {
                    x[i] = '0';
                }
            }
            else
            {
                string y = "1";
                for(int i = 0; i < n; i++)
                {
                    y += '0';
                }
                x = y;
            }
        }
        
        cout << x << endl;
    }
    return 0;
}