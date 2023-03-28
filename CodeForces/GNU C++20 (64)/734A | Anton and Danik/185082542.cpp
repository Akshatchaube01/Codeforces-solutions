#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
 int n;
 cin>>n;
    string str;
    cin>>str;
    int countA=0;
    int countD=0;
    for(int i=0;i<n;i++){
     if(str[i]=='A'){
      countA++;
     }
     else{
      countD++;
     }
    }
    if(countD>countA){
     cout<<"Danik"<<endl;
    }
    else if(countA>countD){
     cout<<"Anton"<<endl;
    }
    else{
     cout<<"Friendship"<<endl;
    }
}
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  int t=1;
  while(t--){
   solve();
  }
    return 0; 
} 