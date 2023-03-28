//Problem A. String task 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
  string str;
  cin>>str;
  char ch='\0';
  for(int i=0;i<str.size();i++){
   if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U' || str[i]=='y' || str[i]=='Y'){
    continue;
   }
   else{
    if(str[i]>97){
     
     cout<<"."<<str[i];
    }
    else{
     ch=str[i]+32;
     cout<<"."<<ch;
    }
   }
  }
  return;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
    solve();
    return 0; 
} 