#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n,x,y;
        cin >> n >> x >> y;
        vector<ll>p(n,0);
        vector<ll>r;
        for(int i = 1; i <= n; i++)
        {
            r.push_back(i);
        }

        unordered_set<ll> nums(r.begin(), r.end());

        ll cnt=0;
        for(ll i = x-1; i < n; i = i+x)
        {
            cnt++;
        }
        ll sub = 0;
        ll sum = 0;
        for(ll i = x-1; i < n; i = i+x)
        {
            if((i+1)%y)
            {
                p[i] = n - sub;
                nums.erase(p[i]);
                sum += p[i];
                sub++;
            }
            else
            {
                p[i] = n - cnt;
                nums.erase(p[i]);
                sum += p[i];
                cnt--;
            }
        }

        ll diff = 0;
        for(auto i = nums.begin(); i != nums.end(); i++)
        {
            diff += *i;
        }

        cout << sum - diff << "\n";
        
    }
    return 0;
}