//A. Ezzat and Two Subsequences
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 vector<double>vec(n);
 
 for(int i=0;i<n;i++){
  double x;
  cin>>x;
  vec[i]=x;
 }
 sort(vec.begin(),vec.end());
 double sum=0;
 for(int i=0;i<n-1;i++){
  sum+=vec[i];
 }
 sum=sum/(n-1);
 cout<<sum+vec[n-1]<<endl;
}
 
int main(){ 
    SPEED; 
    cout.precision(9); 
    cout << fixed; 
  int t;
  cin>>t;
  //t=1;
  while(t--){
   solve();
  }
    return 0; 
} 