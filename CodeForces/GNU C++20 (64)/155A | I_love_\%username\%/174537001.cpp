//A. I_love_%username%
#include <bits/stdc++.h> 
using namespace std;
int main() { 
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
   cin>>arr[i];
  }
  int max=arr[0];
  int min=arr[0];
  int count=0;
  for(int i=1;i<n;i++){
   if(max<arr[i]){
    max=arr[i];
    count++;
   }
   if(min>arr[i]){
    min=arr[i];
    count++;
   }
  }
  cout<<count<<endl;
    return 0; 
} 