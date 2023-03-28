#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ne=n;
    for(int i=0;i<n;i++){
     if(n==1){
      cout<<"I hate it"<<endl;
      return 0;
     }
     else if(i%2==0 && i==n-1){
      cout<<"I hate ";
     }
     else if(i%2==0){
      cout<<"I hate that ";
     }
     else if(i%2!=0 && i==n-1){
      cout<<"I love ";
     }
     else{
      cout<<"I love that ";
     }
     
    } 
    cout<<" it";
 return 0;
}
  
  