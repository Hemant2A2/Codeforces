#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n,time;
        cin >> n >> time;
        long int swp=0;
        if(time%2)
        {
            swp = ((n-1)/2)*((time/2)) + (n/2)*(time/2);
        }
        else
        {
            swp = ((n-1)/2)*((time/2)+1) + (n/2)*(time/2);
        }

        cout << swp << endl;
    }
    return 0;
}