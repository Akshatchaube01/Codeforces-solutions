#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
    string str="314159265358979323846264338327";
    string str2;
    cin>>str2;
    int count=0;
    for(int i=0;i<str.size();i++){
     if(str[i]==str2[i]){
      count++;
     }
     else{
      break;
     }
    }
    cout<<count<<endl;
}
#undef int
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