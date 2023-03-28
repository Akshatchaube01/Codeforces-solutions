#include <bits/stdc++.h>
 using namespace std; 
 
 int main(){
  ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int num;
     cin>>num;
     string arr[num];
     for(int i=0;i<num;i++){
      arr[i]="o";
     }
     int num1=1,num2=1;
     while(num1<=num){
      arr[num1-1]="O";
      int temp=num2;
      num2=num1+num2;
      num1=temp;
     }
  for(int i=0;i<num;i++){
   cout<<arr[i];
  }
 return 0;
 }
   
    
  
  