#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 char ch;
 cin>>ch;
 string str="codeforces";
 for(int i=0;i<str.size();i++){
  if(ch==str[i]){
   cout<<"YES"<<endl;
   return;
  }
 }
 cout<<"NO"<<endl;
    
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