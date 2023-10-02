#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    int cnt = 0;
    int teams =0;
    for(int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        if(y+k<=5)
        {
            cnt++;
            if(cnt == 3)
            {
                teams++;
                cnt =0;
            }
        }
    }
    cout << teams;
    return 0;
}