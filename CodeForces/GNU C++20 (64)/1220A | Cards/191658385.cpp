#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 string str;
 cin>>str;
 int countz=0;
 int countn=0;
 for(int i=0;i<n;i++){
  if(str[i]=='z'){
   countz++;
  }
  if(str[i]=='n'){
   countn++;
  }
 }
 for(int i=0;i<countn;i++){
  cout<<1<<" ";
 }
 for(int i=0;i<countz;i++){
  cout<<0<<" ";
 }
 return;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  int t;
  t=1;
  while(t--){
   solve();
  }
    return 0; 
} 