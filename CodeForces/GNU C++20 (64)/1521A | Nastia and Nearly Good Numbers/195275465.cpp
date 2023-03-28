 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int a,b;
 cin>>a>>b;
 if(b==1){
  cout<<"NO"<<endl;
  return;
 }
 else{
  cout<<"YES"<<endl;
  cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << endl;
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