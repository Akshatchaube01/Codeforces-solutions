#include <bits/stdc++.h>
using namespace std;
#define lo long long
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lo A,B;
    cin>>A>>B;
    lo x,y,z;
    cin>>x>>y>>z;
    lo count=0;
    if(A-(x*2)>=0){
     A=A-(x*2);
    }
    else{
     count=count+abs(A-(x*2));
     A=0;
    }
    if(A-y>=0){
     A=A-y;
    }
    else{
     count=count+abs(A-y);
     A=0;
    }
    if(B-y>=0){
     B=B-y;
    }
    else{
     count=count+abs(B-y);
     B=0;
    }
    if(B-(z*3)>=0){
     B=B-(z*3);
    }
    else{
     count=count+abs(B-(z*3));
     B=0;
    }
    cout<<count<<endl;
 
return 0;
}
  
  