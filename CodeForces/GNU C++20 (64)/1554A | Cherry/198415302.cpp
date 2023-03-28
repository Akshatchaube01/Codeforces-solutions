//A. Cherry
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 ll n;
 cin>>n;
 vector<ll> vec(n);
 for(ll i=0;i<n;i++){
  ll x;
  cin>>x;
  vec[i]=x;
 }
 ll maxx=INT_MIN;
 for(ll i=0;i<n-1;i++){
  maxx=max(maxx,vec[i]*vec[i+1]);
 }
    cout<<maxx<<endl;
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