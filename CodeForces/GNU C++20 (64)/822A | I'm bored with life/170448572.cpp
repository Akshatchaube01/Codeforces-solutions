#include <bits/stdc++.h>
using namespace std; 
#define lo long long
 
lo fact(int x){
 lo num=1;
 for(int i=1;i<=x;i++){
  num*=i;
 }
 return num;
}
/*
 One way to find GCD :
int gcd(int x,int y){
 if(y==0)return x;
 return gcd(y,x%y);
}
Another way to do this question would be as follows :
 
int gcd(int x,int y){
 int gcd;
 for(int i=1;i<=x && i<<=y;++i){
  if(x%i==0 && y%i==0){
  gcd=i;
  }
 }
 return gcd;
}
 
*/
 
int main(){
 lo x,y;
 cin>>x>>y;
 cout<<fact(min(x,y));
return 0;
}
 
  
  