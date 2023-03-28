//A. Shortest Path with Obstacle
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
    int x1,y1;
    int x2,y2;
    int x3,y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    if((x1==x3 && x2==x3 && y1>y3 && y3>y2)||(x1==x3 && x2==x3 && y2>y3 && y3>y1)){
     cout<<abs(x1-x2)+abs(y1-y2)+2<<endl;
     return;
    }
    else if((y1==y3 && y2==y3 && x1>x3 && x3>x2)||(y1==y3 && y2==y3 && x2>x3 && x3>x1)){
     cout<<abs(x1-x2)+abs(y1-y2)+2<<endl;
     return;
    }
    else{
     cout<<abs(x1-x2)+abs(y1-y2)<<endl;
    }
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