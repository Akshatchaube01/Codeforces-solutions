//A. Dragons
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 int n,s;
 cin>>s>>n;
 vector< pair <int,int> > vect;
 int arr[n];
 int arr1[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
  cin>>arr1[i];
 }
 for(int i=0; i<n; i++){
  vect.push_back( make_pair(arr[i],arr1[i]) );
 }
 sort(vect.begin(), vect.end());
 for(int i=0;i<n;i++){
  if(vect[i].first<s){
   s+=vect[i].second;
  }
  else{
   cout<<"NO"<<endl;
   return 0;
  }
 }
 cout<<"YES"<<endl;
 return 0;
}