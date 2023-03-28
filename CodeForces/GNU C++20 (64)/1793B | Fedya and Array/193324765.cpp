#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 ll n,m;
 cin>>n>>m;
 cout<<((n-m)+(n-1-m)+1)<<endl;
 for(ll i=m+1;i<=n;i++){
  cout<<i<<" ";
 }
 for(ll i=n-1;i>=m;i--){
  cout<<i<<" "; 
 }
 cout<<endl;
    return;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  int t;
  cin>>t;
  //t=1;
  while(t--){
   solve();
  }
    return 0; 
} 