//https://codeforces.com/problemset/problem/131/A

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    //getline(cin >> ws, s);
    cin >> s;
    if(s.size()>1)
    {
        int c = 0;
        char ch;
        for( size_t i = 1; i < s.size() ; i++)
        {
            ch = s[i];
            if(s[i] == toupper(ch))
                c = 1;
            else
                c = 0;
            
        }
        if(c)
        {
            ch = s[0];
            s[0] = toupper(ch);
            for(size_t i = 1; i < s.size(); i++)
            {
                ch = s[i];
                s[i] = tolower(ch);
            }
        }
    }
    cout << s;
    return 0;
}