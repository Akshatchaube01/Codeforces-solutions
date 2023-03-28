//A. Eshag Loves Big Arrays
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 vector<int>vec(n);
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  vec[i]=x;
 }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
     if(min>vec[i]){
      min=vec[i];
     }
    }
    int count=0;
    for(int i=0;i<n;i++){
     if(vec[i]==min){
      count++;
     }
    }
    cout<<n-count<<endl;
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