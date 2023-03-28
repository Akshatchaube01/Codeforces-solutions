#include <bits/stdc++.h>
using namespace std; 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int count=0;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(b-a>=2){
            count++;
        }
    }
    cout<<count<<endl;
    
return 0;
}
        
        