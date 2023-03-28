#include <bits/stdc++.h>
using namespace std; 
 
int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 int t=0;
 int n;
 cin>>n;
 while(n--){
  string str;
  cin>>str;
  if(str=="X++"||str=="++X"){
   t++;
  }
  else if(str=="--X"||str=="X--"){
   t--;
  }
 }
 cout<<t<<endl;
 return 0;
}
  
  