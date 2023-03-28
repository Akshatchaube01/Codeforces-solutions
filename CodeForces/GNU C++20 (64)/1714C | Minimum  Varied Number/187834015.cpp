#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
void solve(){
    int a;
    cin>>a;
    stack<int> stk;
    if(a<=9){
     cout<<a<<endl;
     return;
    }
    for(int i=9;i>0;i--){
     if(a>=i){
      stk.push(i);
      a=a-i;
     }
     if(a==0){
      break;
     }
     
    }
    
    while(!stk.empty()){
     int x=stk.top();
     stk.pop();
     cout<<x;
    }
    cout<<endl;
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