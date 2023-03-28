#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
 string str;
 cin>>str;
 if((str[0]-'0')+(str[1]-'0')+(str[2]-'0')==(str[3]-'0')+(str[4]-'0')+(str[5]-'0')){
  cout<<"YES"<<endl;
 }
 else{
  cout<<"NO"<<endl;
 }
}
#undef int
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