#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    int low=0;
    int high=0;
    for(int i=0;i<str.size();i++){
     if(str[i]<97){
      high++;
     }
     else{
      low++;
     }
    }
    if(high>low){
     for(int i=0;i<str.size();i++){
      if(str[i]<97){
       continue;
      }
      else{
       str[i]=str[i]-32;
      }
     }
    }
    else if(low>high){
     for(int i=0;i<str.size();i++){
      if(str[i]<97){
      str[i]=str[i]+32;
      }
     }
    }
    else{
     for(int i=0;i<str.size();i++){
      if(str[i]<97){
       str[i]=str[i]+32;
      }
     }
    }
    cout<<str<<endl;
 
return 0;
}
  
  