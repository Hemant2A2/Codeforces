//https://codeforces.com/problemset/problem/363/B

#include<iostream>
#include <vector>
#include <unordered_map>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> height;
    unordered_map<int, int> index;
    for(int i = 0; i < n; i++)
    {
        int h;
        cin >> h;
        height.push_back(h);
    }
    int sum =0;
    int i;
    for( i=0; i < k; i++)
    {
        sum += height[i];
    }
    index.insert({i+1,sum});
    int j = i;
    j++;
    while(j<n)
    {
        sum += height[j++] - height[i++];
        index.insert({i+1,sum});
    }
    auto it = index.begin();
    int min = it->second;
    int pos = 1;
    for(it = index.begin(); it != index.end(); it++)
    {
        if( it->second < min)
        {
            min = it->second;
            pos = it->first;
        }
    }

    cout << pos << endl;

    return 0;
}