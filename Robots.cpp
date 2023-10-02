#include<iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
const int max_N=1e4+1;
struct var{
    float acc,t;
};
bool comp(var x,var y){
    return x.acc - y.acc > 1e-5;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    var x[max_N];
    cout << fixed;
    for(int i=0;i<n;i++){
        cin >> x[i].acc >> x[i].t;
    }
    float v=0,dist_case=0, dist_opt=0;
    for(int i=0;i<n;i++){
        dist_case += v * x[i].t ;//+(x[i].t * x[i].t * x[i].acc)/2;
        v += x[i].acc * x[i].t;
    }
    v=0;
    sort(x,x+n,comp);
    for(int i=0;i<n;i++){
        dist_opt += v * x[i].t ;//+ (x[i].t * x[i].t * x[i].acc)/2;
        v += x[i].acc * x[i].t;
    }
    cout << setprecision(1);
    cout << dist_opt - dist_case;
    return 0;
}
