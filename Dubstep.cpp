#include<iostream>
#include <string>
#include <vector>
typedef vector<string> vs;
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string wub = "";
    vs word;
    for(size_t i = 0; i < s.size(); i++)
    {
        wub.pb(s[i]);
        if(wub == "WUB")
        {
            word.pb(" ");
            wub = "";
        }
    }
    return 0;
}