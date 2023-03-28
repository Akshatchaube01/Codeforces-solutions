#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count=0;
 int t;
 cin>>t;
 while(t--){
  int num;
  cin>>num;
  count=count+num;
 }
 if(count==0){
  cout<<"EASY"<<endl;
 }
 else{
  cout<<"HARD"<<endl;
 }
 
return 0;
}
  
  