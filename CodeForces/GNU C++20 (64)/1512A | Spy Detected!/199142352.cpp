//A. Spy Detected!- DIV 3 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
     int x;
     cin>>x;
     vec[i]=x;     
    }
    vector<int>a=vec;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(vec[i]!=a[1]){
            cout<<i+1<<endl;
            return;
        }
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