#include<iostream>
#include <unordered_set>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    unordered_set<int>val;
    for(size_t i = 1; i <= n; i++)
    {
        val.insert(i);
    }

    for(size_t i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        val.erase(a);
    }

    cout << val.size();
    return 0;
}