#include<iostream>
#include <vector>
#include <set>
#include<string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> num = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    set<int> nums(num.cbegin(), num.cend());
    string s;
    cin >> s;
    int cnt =0;
    for(int i = 0; i < s.size(); i++)
    {
        if( s[i] == '4' || s[i] == '7')
            cnt++;
    }

    if(auto s = nums.find(cnt);s!= nums.end())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}