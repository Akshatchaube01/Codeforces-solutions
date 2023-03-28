//B. Array Reodering
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 vector<int>vec,odd,even;
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  if(x%2==0){
   even.push_back(x);
  }
  else{
   odd.push_back(x);
  }
 }
 for(auto x:even){
  vec.push_back(x);
 }
 for(auto x:odd){
  vec.push_back(x);
 }
 int total=0;
 for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
   if(__gcd(vec[i],2*vec[j])>1) total++;
  }
 }
 cout<<total<<endl;
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