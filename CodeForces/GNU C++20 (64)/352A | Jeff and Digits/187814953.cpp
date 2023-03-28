#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
void solve(){
 int num;
 cin>>num;
 int cnt0,cnt5,actual;
 cnt0=cnt5=actual=0;
 for(int i=0;i<num;i++){
  int x;
  cin>>x;
  if(x==5)cnt5++;
  else cnt0++;
  if((cnt5*5)%9==0){
   actual=cnt5;
  }
 }
 if(actual!=0 && cnt0>0){
  for(int i=0;i<actual;i++){
   cout<<5;
  }
  for(int i=0;i<cnt0;i++){
   cout<<0;
  }
 }
 else if(cnt0>0){
  cout<<0;
 }
 else{
  cout<<-1;
 }
 return;
}
#undef int
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed;
  solve();
    return 0; 
} 