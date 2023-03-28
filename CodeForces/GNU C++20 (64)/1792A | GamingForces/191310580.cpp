//Problem A - Gaming force - Educational Round 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
     cin>>arr[i];
     if(arr[i]==1){count++;}
    }
    if(count==n){
     if(count%2==0){
      cout<<count/2<<endl;
     }
     else{
      cout<<(count/2)+1<<endl;
     }
     return;
    }
    
    if(count%2==0){
     cout<<n-(count/2)<<endl;
    }
    else{
     if(count>2){
      cout<<n-(count/2)<<endl;
      return;
     }
     cout<<n<<endl;
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