#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mik=0;
 int chris=0;
 int draw=0;
 int t;
 cin>>t;
 while(t--){
  int num1,num2;
  cin>>num1>>num2;
  if(num1>num2){
   mik++;
  }
  else if(num2>num1){
   chris++;
  }
  else{
   draw++;
  }
 }
 if(mik>chris){
  cout<<"Mishka"<<endl;
 }
 else if(chris>mik){
  cout<<"Chris"<<endl;
 }
 else{
  cout<<"Friendship is magic!^^"<<endl;
 }
 
return 0;
}
  
  