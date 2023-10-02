//https://codeforces.com/problemset/problem/58/A

//SOLVED



#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> word;
    word.push('o');
    word.push('l');
    word.push('l');
    word.push('e');
    word.push('h');
    int n = s.size();
    for(int i = 0 ; i < n; i++)
    {
        if( !word.empty() && word.top() == s[i])
        {
            word.pop();
        }
    }
    if(word.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}