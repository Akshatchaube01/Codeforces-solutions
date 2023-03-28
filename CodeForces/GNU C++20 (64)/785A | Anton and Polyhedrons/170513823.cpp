/*Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces*/
 
#include <bits/stdc++.h>
 using namespace std; 
 
 int main(){
  ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int count=0;
  int t;
  cin>>t;
  while(t--){
   
   string str;
   cin>>str;
   if(str=="Tetrahedron"){
    count=count+4;
   }
   else if(str=="Cube"){
    count=count+6;
   }
   else if(str=="Octahedron"){
    count=count+8;
   }
   else if(str=="Dodecahedron"){
    count=count+12;
   }
   else if(str=="Icosahedron"){
    count=count+20;
   }
   else{
    count=count;
   }
  }
 cout<<count<<endl;
 return 0;
 }
   
    
  