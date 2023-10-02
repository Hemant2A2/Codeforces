#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll k;
    ll joy;
    ll mj;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        ll f, t;
        cin >> f >> t;

        if(i==0)
        {
            if(t<=k)
            {
                mj = joy = f;
            }
            else
            {
                mj = joy = f - t + k;
            }
        }
        else
        {
            if(t<=k)
            {
                joy = f;
                mj = max(joy,mj);
            }
            else
            {
                joy = f - t + k;
                mj = max(joy,mj);
            }
        }
    }

    cout << mj;

    return 0;
}