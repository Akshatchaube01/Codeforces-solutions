//Wrong substraction 
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    while(t--){
     if(n%10==0){
      n=n/10;
     }
     else{
      n=n-1;
     }
    }
    cout<<n<<endl;
return 0;
}
  
  
  
  