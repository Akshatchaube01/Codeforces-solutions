#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
    string str;
    cin>>str;
    int count=0;
    if(str[0]=='y'|| str[0]=='Y'){
     count++;
    }
    if(str[1]=='e'|| str[1]=='E'){
     count++;
    }
    if(str[2]=='s'|| str[2]=='S'){
     count++;
    }
    if(count==3){
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