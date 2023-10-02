#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<int>v;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int min = v[0];
    for(int i = 0; i < n; i++)
    {
        if(v[i]< min)
        {
            min = v[i];
        } 
    }
    int flag = 1;
    for(int i=0 ; i<n; i++)
    {
        if((v[i] !=min) || flag == 0)
        {
            if(v[i]%2)
            {
                sum += v[i];
            }
            else
            {
                sum += v[i]-1;
            }
        }
        else
        {
            flag = 0;
        }
    }

    if(sum%2 != 1)
    {
        if(min%2)
        {
            sum += min;
        }
        else
        {
            sum += min -1;
        }
    }
    

    cout << sum << endl;
    return 0;
}