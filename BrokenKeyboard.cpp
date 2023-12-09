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
        string s;
        cin >> s;
        set<char>correct;
        char curr = s[0];
        int streak = 1;
        for(size_t i = 1; i < s.size(); i++)
        {
         	if(s[i] == curr)
         		streak++;
         	else
         	{
         		if(streak%2)
         			correct.insert(curr);
         		streak = 1;
         		curr = s[i];
         	}
        }
        size_t i = s.size() -1;
        if(streak%2)
 			correct.insert(s[i]);
 		string res = "";
 		for(auto it = correct.begin(); it != correct.end(); it++)
 		{
 			res += *it;
 		}
 		cout << res << nline;

    }
    return 0;
}
