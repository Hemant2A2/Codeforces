//https://codeforces.com/problemset/problem/118/A

//SOLVED


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string inp,opt = "", dot = ".";
    cin >> inp;
    int n = inp.size();
    for( int i = 0; i < n  ; i++)
    {
        inp[i] = tolower(inp[i]);
    }
    for( int i = 0; i < n  ; i++)
    {
        if( inp[i] != 'a' && inp[i] != 'e' && inp[i] != 'i' && inp[i] != 'o' && inp[i] != 'u' && inp[i] != 'y')
        {
            opt += dot + inp[i];
        }
    }
    cout << opt << endl;

    return 0;
}