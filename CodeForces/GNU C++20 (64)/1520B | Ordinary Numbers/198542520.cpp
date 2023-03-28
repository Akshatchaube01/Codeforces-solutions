//B. Ordinary Numbers
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 int res=0;
 for(int pw=1;pw<=n;pw=pw*10+1){
  for(int d=1;d<=9;d++){
   if(pw*d<=n){
    res++;   
   }
  }
 }
    cout<<res<<endl;
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