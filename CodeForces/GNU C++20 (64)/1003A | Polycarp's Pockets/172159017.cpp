// Polycarp's problem
// Hashing will solve the problem instantly
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int> v;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    int m=*max_element(v.begin(),v.end());
    
    
    
    vector<int> hash(m+1,0);
    
    for(int i=0;i<n;i++){
        hash[v[i]]++;
    }
    
  //for(int i=0;i<hash.size();i++){
    //cout<<hash[i]<<" ";
  //}
  int max=INT_MIN;
  for(int i=0;i<hash.size();i++){
   if(hash[i]>max){
    max=hash[i];
   }
  }
  cout<<max<<endl;
}
 
  