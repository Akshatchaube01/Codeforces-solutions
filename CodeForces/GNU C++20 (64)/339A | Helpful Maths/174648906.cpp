//Helpful Maths
#include <bits/stdc++.h>
using namespace std;
int main(){
 string str,new_str;
 cin>>str;
 for(int i=0;i<str.size();i++){
  if(str[i]!='+'){
   new_str.push_back(str[i]);
  }
 }
 sort(new_str.begin(),new_str.end());
 cout<<new_str[0];
 for(int i=1;i<new_str.size();i++){
  cout<<"+"<<new_str[i];
 }
 return 0;
}