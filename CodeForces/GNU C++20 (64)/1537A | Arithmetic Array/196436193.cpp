//A. Arithmetic Array
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 vector<int> vec;
 int sum=0;
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  vec.push_back(x);
  sum+=vec[i];
 }
 if(sum<n){
  cout<<1<<endl;
 }
 else{
  cout<<sum-n<<endl;
 }
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