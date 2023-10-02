#include<iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    unordered_set<char>gb;
    for(int i = 0; i < s.size(); i++)
    {
        gb.insert(s[i]);
    }

    if(gb.size()%2)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}