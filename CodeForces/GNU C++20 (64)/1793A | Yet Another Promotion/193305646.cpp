// Div 2 Contest 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 ll a,b;
 cin>>a>>b;
 ll n,m;
 cin>>n>>m;
 ll ans;
 ll div=n/(m+1);
 ll rem=n%(m+1);
 if(n==(m+1)){
  ans=div*a*m;
 }
 else{
  ans=div*a*m;
  ans+=(min(rem*b,rem*a));
 }
 ll new_num=min(n*a,n*b);
 cout<<min(new_num,ans)<<endl;
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