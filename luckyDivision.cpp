//https://codeforces.com/problemset/problem/122/A

//SOLVED

#include <iostream>
//#include <iterator>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> num = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    set<int> nums(num.cbegin(), num.cend());
    int n,c=0;
    cin >> n;
    c = count_if(nums.begin(),nums.end(), [=](int e){ return n%e == 0;});
    if(c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}