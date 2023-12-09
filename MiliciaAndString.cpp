#include <iostream>
#include <algorithm>
#include <cstring>
#include <math.h>
#include <vector>
#include <utility>
#include <stdio.h>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
#define pb push_back
#define ff first
#define ss second
#define nline "\n"
#define all(x) (x).begin(),(x).end()
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> v;
typedef unordered_set<int> us;
typedef unordered_map<int,int> um;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input_cf.txt", "r" , stdin);
    freopen("output_cf.txt", "w" , stdout);
#endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int test = 1;
    cin >> test;
    while(test--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int m = 0;
        for(size_t i = 0; i < n; i++)
        {
            if(s[i] == 'B')
                m++;
        }
        if( k == m)
            cout << 0 << nline;
        else if( k > m)
        {
            int cnt = k - m -1;
            int idx = -1;
            for(size_t i = 0; i < n; i++)
            {
                if(cnt >= 0)
                {
                    if(s[i] == 'A')
                        cnt--;
                }
                else
                {
                    idx = i;
                    break;
                }
            }
            if(idx == -1)
                idx = n;
            cout << 1 << nline;
            cout << idx << " B" << nline;
        }
        else
        {
            int cnt = m - k -1;
            int idx = -1;
            for(size_t i = 0; i < n; i++)
            {
                if(cnt >= 0)
                {
                    if(s[i] == 'B')
                        cnt--;
                }
                else
                {
                    idx = i;
                    break;
                }
            }
            if(idx == -1)
                idx = n;
            cout << 1 << nline;
            cout << idx << " A" << nline;
        }
    }
    return 0;
}
