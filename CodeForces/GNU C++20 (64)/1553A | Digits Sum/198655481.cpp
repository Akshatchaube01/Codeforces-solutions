//A. Digits Sum
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 if(n==9){
  cout<<1<<endl;
  return;
 }
 else if(n<10){
  cout<<0<<endl;
  return;
 }
 else{
  int ans=n/10;
  if(n%10==9)ans++;
  cout<<ans<<endl;
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