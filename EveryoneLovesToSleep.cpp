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
         int n,h,m;
         cin >> n >> h >> m;
         v alarm;
         for(size_t i = 0; i < n; i++)
         {
          	int a , b;
          	cin >> a >> b;
          	if(b-m < 0)
          	{
          		a--;
          		b = b-m + 60;
          	}
          	else
          		b = b-m;
          	if(a-h < 0)
          		a = a-h+24;
          	else
          		a = a-h;
          	alarm.pb(60*a + b);
         }
         sort(all(alarm));
         cout << alarm[0]/60 << " " << alarm[0]%60 << nline;
     }
     return 0;
 }
 