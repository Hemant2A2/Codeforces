#include<iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char comp;
    int f=0;
    for(size_t i = 0; i < 8; i++)
    {
        string inp;
        cin >>inp;
        for(size_t j = 0; j < 8; j++)
        {
            if(j==0)
            {
                comp = inp[j];
            }
            else
            {
                if(comp == inp[j])
                {
                    f++;
                    comp = inp[j];
                }
                else
                    comp = inp[j];
            }
        }
    }

    if(f)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}