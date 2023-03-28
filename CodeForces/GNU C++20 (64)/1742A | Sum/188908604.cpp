#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c){
     cout<<"YES"<<endl;
    }
    else if(a+c==b){
     cout<<"YES"<<endl;
    }
    else if(b+c==a){
     cout<<"YES"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
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