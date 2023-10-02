//https://codeforces.com/problemset/problem/479/A


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> val;
    val.reserve(6);
    val.push_back(a+b+c);
    val.push_back((a+b)*c);
    val.push_back(a*(b+c));
    //val.push_back((a+c)*b);
    val.push_back((a*b)+c);
    val.push_back(a+(b*c));
    //val.push_back((a*c)+b);
    val.push_back(a*b*c);
    int max = val[0];
    for( int i = 1; i < val.size(); i++)
    {
        if( max < val[i] )
        {
            max = val[i];
        }
    }
    cout << max << endl;

    return 0;
}