#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 int t;
 cin>>t;
 while(t--){
  int count=0;
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int arr1[4]={a,b,c,d};
  for(int i=1;i<4;i++){
   if(arr1[i]>a){
    count++;
   }
   else;
  }
  cout<<count<<endl;
 }
 
return 0;
}