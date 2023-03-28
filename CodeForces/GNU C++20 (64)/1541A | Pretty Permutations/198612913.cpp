//A. Pretty Permutations
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 vector<int> vec(n);
 for(int i=0;i<n;i++){
  vec[i]=i+1;
 }
 if(n%2==0){
  for(int i=1;i<n;i=i+2){
   swap(vec[i-1],vec[i]);
  }
  for(int i=0;i<n;i++){
   cout<<vec[i]<<" ";
  }
 }
 else{
  for(int i=1;i<n-3;i=i+2){
   swap(vec[i],vec[i-1]);
  }
  for(int i=0;i<n-3;i++){
   cout<<vec[i]<<" ";
  }
  int f=vec[n-3];
  int m=vec[n-2];
  int l=vec[n-1];
  cout<<m<<" "<<l<<" "<<f;
 }
 cout<<endl;
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