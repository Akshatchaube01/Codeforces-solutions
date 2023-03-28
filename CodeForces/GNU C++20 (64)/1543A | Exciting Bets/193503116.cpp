#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 ll a,b;
 cin>>a>>b;
 ll diff=abs(a-b);
 if(a==b){
  cout<<0<<" "<<0<<endl;
  return;
 }
 cout<<abs(a-b)<<" ";
 cout<<min(a%diff,diff-(a%diff))<<endl;
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