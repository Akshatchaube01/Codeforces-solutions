//Theatre Square 
#include <bits/stdc++.h>
using namespace std; 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
    double n,m,a;
    cin>>n>>m>>a;
    long long d=ceil(n/a);
    long long e=ceil(m/a);
    long long yourmum=d*e;
    cout<<yourmum<<endl;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed;
    solve();
    return 0; 
} 