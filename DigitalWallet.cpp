#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxelem(vector<int> &v, int i,int j)
{
    int max = v[i];
    for(int k = i; k <= j; k++)
    {
        if(max < v[i])
        {
            max = v[i];
        }
    }
    return max;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int> >v;
    vector<int>to_put;
    v.reserve(n);
    int oper = 1;
    for(int i = 0; i < n; i++)
    {
       to_put.clear();
        for(int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            to_put.push_back(a);
        }
        v.push_back(to_put);
    }
    int sum = 0;
    vector<int>vec;
    while( oper != m-k+1)
    {
        int store;
        for(int i = 0; i < n; i++)
        {
            store = maxelem(v[i],oper-1,oper + k -2);
            vec.push_back(store);
        }
        oper++;
    }

    sort(vec.begin(), vec.end(), greater<int>());
    for(int i = 0; i < m-k+1; i++)
    {
        sum += vec[i];
    }

    cout << sum;
    cout << "\n";
    
    return 0;
}