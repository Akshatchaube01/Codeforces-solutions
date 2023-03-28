#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n,w;
    cin>>k>>n>>w;
    int newn=(k*w*(w+1))/2;
    if(n>=newn){
     cout<<0<<endl;
    }
    else{
     cout<<abs(n-(k*w*(w+1))/2)<<endl;
    }
    
 return 0;
}
  
  