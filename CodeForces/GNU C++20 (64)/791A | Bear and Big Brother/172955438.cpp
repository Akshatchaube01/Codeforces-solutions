#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int a,b;
 cin>>a>>b;
 int count=0;
 while(a<=b){
  a=3*a;
  b=2*b;
  count++;
 }
 cout<<count<<endl;
return 0;
}
  
  