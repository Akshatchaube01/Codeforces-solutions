// Candies and two sisters 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t;
 cin>>t;
 while(t--){
  long long a;
  cin>>a;
  if(a==1 || a==2){
   cout<<0<<endl;
  }
  else{
   cout<<(a-1)/2<<endl;
  }
 }
 return 0;
}
  
  