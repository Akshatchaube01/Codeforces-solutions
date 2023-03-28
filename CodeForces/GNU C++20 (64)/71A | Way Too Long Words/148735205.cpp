#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 int t;
 cin>>t;
 while(t--){ 
  string a;
  cin>>a;
  if(a.size()>10){
   cout<<a.front()<<a.size()-2<<a.back()<<endl;
  }
  else{
   cout<<a<<endl;
  }
 }
return 0;
}