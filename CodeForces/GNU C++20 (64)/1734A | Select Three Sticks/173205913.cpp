#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];
  
  int mini=INT_MAX;
  sort(arr.begin(),arr.end());
  for(int i=0;i<n-2;i++){
   int x=abs(arr[i]-arr[i+1]);
   x+=abs(arr[i+1]-arr[i+2]);
   mini=min(x,mini);
  }
  cout<<mini<<endl;
 }
 
 
return 0;
}
  
  