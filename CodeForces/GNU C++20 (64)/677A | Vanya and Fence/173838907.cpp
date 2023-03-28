#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int count=0;
    for(int i=0;i<n;i++){
     cin>>arr1[i];
     if(arr1[i]<=m){
      count+=1;
     }
     else{
      count+=2;
     }
    }
    cout<<count<<endl;
    
 return 0;
}
  
  