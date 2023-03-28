// A. Lucky Division
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 string str;
 cin>>str;
 int count2=0;
 for(int i=0;i<str.size();i++){
  if(str[i]=='4' || str[i]=='7'){
   count2++;
  }
 }
 if(count2==str.size()){
  cout<<"YES"<<endl;
  return;
 }
 for(int i=0;i<stoi(str);i++){
  int count=0;
  string str2=to_string(i);
  for(int j=0;j<str2.size();j++){
   if(str2[j]=='4' || str2[j]=='7'){
    count++;
   }
  }
  if(count==str2.size()){
   if(stoi(str)%i==0){
    cout<<"YES"<<endl;
    return;
   }
  }
 }
 cout<<"NO"<<endl;
 return;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  solve();
    return 0; 
} 