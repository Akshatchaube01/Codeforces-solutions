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
     char arr[n];
     for(int i=0;i<n;i++){
      cin>>arr[i];
     }
     int first_index=n;
     for(int i=n;i>=0;i--){
      if(arr[i]=='8'){
       first_index=i;
      }
     }
     if(first_index<=n-11){
      cout<<"YES"<<endl;
     }
     else{
      cout<<"NO"<<endl;
     }
    }
 return 0;
}
  
  