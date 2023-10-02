#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector<int>drink;
    drink.push_back(c*d);
    drink.push_back(p/np);
    drink.push_back((k*l)/nl);
    sort(drink.begin(), drink.end());
    cout << drink[0]/n ;
    return 0;
}