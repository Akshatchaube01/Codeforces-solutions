#include <bits/stdc++.h> 
using namespace std;  
 
void display(int a,int num){ 
 for(int i=0;i<a;i++){ 
  cout<<2<<" "; 
 }
}
 
int main(){ 
 ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
 int num; 
 cin>>num; 
 if(num%2==0){ 
  int count=num/2; 
  cout<<count<<endl; 
  display(count,num); 
 } 
 else{ 
  int count=(num)/2; 
  cout<<count<<endl; 
  display(count-1,num); 
  cout<<3<<endl; 
 } 
return 0; 
}