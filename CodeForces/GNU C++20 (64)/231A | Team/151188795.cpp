#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 int t;
 int overall_count=0;
 cin>>t;
 while(t--){
  int count=0;
  int arr1[3];
  for(int i=0;i<3;i++){
   cin>>arr1[i];
   if(arr1[i]==1){
    count++;
   }
  }
  if(count>=2){
   overall_count++;
  }
 }
 cout<<overall_count<<endl;
 
return 0;
}