//C. Prepend and Append
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
 int new_size=str.size();
 int j=n-1;
 for(int i=0;i<n;i++){
  if(str[i]==str[j]){
   cout<<new_size<<endl;
   return;
  }
 j--;
 new_size--;
 new_size--;
 }
 cout<<0<<endl;
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