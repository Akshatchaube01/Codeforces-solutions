//A. Odd Set
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 n=2*n;
 int arr[n];
 int countodd=0;
 int counteven=0;
 for(int i=0;i<n;i++){
  cin>>arr[i];
  if(arr[i]%2==0){
   counteven++;
  }
  else{
   countodd++;
  }
 }
    if(countodd==counteven){
     cout<<"Yes"<<endl;
    }
    else{
     cout<<"No"<<endl;
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