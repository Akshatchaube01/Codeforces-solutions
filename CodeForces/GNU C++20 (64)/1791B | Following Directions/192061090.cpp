//Geometry Problem - Problem B - Following directions -Div 4
 
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
 int x=0,y=0;
 for(int i=0;i<str.size();i++){
  if(str[i]=='U'){y++;}
  if(str[i]=='D'){y--;}
  if(str[i]=='R'){x++;}
  if(str[i]=='L'){x--;}
  if(x==1 && y==1){cout<<"YES"<<endl;return;}
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