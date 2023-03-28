//A. Do Not Be Distracted!
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 string str;
 cin>>str;
 vector<int>vec(150,0);
 for(int i=0;i<n;i++){
  int new_n=(int)str[i];
  if(vec[new_n]>0 && str[i-1]!=str[i]){
   cout<<"NO"<<endl;
   return;
  }
  vec[new_n]++;
 }
 cout<<"YES"<<endl;
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