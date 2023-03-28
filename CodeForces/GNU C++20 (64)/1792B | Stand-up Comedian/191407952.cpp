//Problem B- Standup Comedian -Div 2 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 if(a!=0){
  cout<<a+min(b,c)*2+min(a+1,abs(b-c)+d)<<endl;
 }
 else{
  cout<<1<<endl;
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