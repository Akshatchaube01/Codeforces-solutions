//B. Equal Candies - Divison 4 
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
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i<n;i++){
     if(min>arr[i]){
      min=arr[i];
     }
    }
    int sum=0;
    for(int i=0;i<n;i++){
     if(arr[i]!=min){
      sum+=arr[i]-min;
     }
    }
    cout<<sum<<endl;
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