//
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 string str,str2;
 cin>>str;
 cin>>str2;
 string str3="";
 for(int i=str.size()-1;i>=0;i--){
  str3+=str2[i];
 }
    if(str==str3){
     cout<<"YES"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  int t;
  t=1;
  solve();
    return 0; 
} 