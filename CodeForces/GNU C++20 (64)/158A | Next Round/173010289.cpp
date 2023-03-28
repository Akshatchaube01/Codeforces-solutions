#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int n,k;
  cin>>n>>k;
  int arr1[n];
  for(int i=0;i<n;i++){
   cin>>arr1[i];
  }
  int ans=0;
 int num=arr1[k-1];
 for(int i=n-1;i>=0;i--){
  if(arr1[i]>=num && arr1[i]>0 ){
   ans=i+1;
  
   break;
   
  }
 }
 
 cout<<ans<<endl;
 
 
}
  
  
  