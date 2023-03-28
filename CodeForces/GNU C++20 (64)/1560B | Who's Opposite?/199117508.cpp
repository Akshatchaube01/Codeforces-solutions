//B. Who's Opposite?
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int a,b,c;
 cin>>a>>b>>c;
 int n=2*abs(a-b);
 if(n<a || n<b || n<c){
  cout<<-1<<endl;
  return;
 }
 if(c-(n/2)<=n && c-(n/2)>=1){
  cout<<c-(n/2)<<endl;
  return;
 }
 else{
  cout<<c+(n/2)<<endl;
  return;
 }
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