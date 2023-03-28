#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  string a;
  int count=0;
  cin>>a;
  for(int i=0;i<a.size();i++){
   if(a[i]=='1')
    continue;
   if(i<n-1 && a[i+1]=='0')
    count+=2;
   else if(i<n-2 && a[i+1]=='1' && a[i+2]=='0')
    count++;
  
  }
  cout<<count<<endl;
 }
return 0;
}