#include<iostream>
#include <vector>
#include <string>
#include <unordered_set>
typedef vector<string> vs;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    vs marks;
    for(size_t i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        marks.push_back(s);
    }

    vector<char>h;
    char high;
    for(size_t i = 0; i < n; i++)
    {
        high = marks[i][0];
        for(size_t j = 0; j < m; j++)
        {
            if(marks[i][j] > high)
            {
                high = marks[i][j];
            }
        }
        h.push_back(high);
    }

    unordered_set<int>best;
    for(size_t i = 0; i < m; i++)
    {
        for(size_t j = 0; j < n; j++)
        {
            if(marks[j][i] == h[i])
            {
                best.insert(i);
            }
        }
    }

    cout << best.size();


    return 0;
}