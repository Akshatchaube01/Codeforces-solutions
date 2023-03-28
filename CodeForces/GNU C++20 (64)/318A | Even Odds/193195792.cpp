#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 ll n,m;
 cin>>n>>m;
 if(m<=(n+1)/2){
  cout<<m*2-1;
 }
 else{
  cout<<(m-(n+1)/2)*2;
 }
 return ;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
    solve();
    return 0; 
} 