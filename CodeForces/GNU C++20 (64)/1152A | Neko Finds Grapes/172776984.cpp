#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 int n,m;
 cin>>n>>m;
 int boxes[n];
 int keys[m];
 for(int i=0;i<n;i++){
  cin>>boxes[i];
 }
 for(int j=0;j<m;j++){
  cin>>keys[j];
 }
 int c=0,co=0;
 for(int i=0;i<n;++i){
  if(boxes[i]%2==0){
   ++c;
  }
  else{
   ++co;
  }
 }
 int k=0,ko=0;
 for(int j=0;j<m;++j){
  if(keys[j]%2==0){
   ++k;
  }
  else{
   ++ko;
  }
 }
 int ans=min(co,k)+min(c,ko);
 cout<<ans<<endl;
return 0;
}
  
  