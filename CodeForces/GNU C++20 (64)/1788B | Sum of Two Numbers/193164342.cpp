// Problem B - Sum of two numbers 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 string n;
 cin>>n;
 int iter=0;
 string new_str1="";
 string new_str2="";
 for(int i=0;i<n.size();i++){
  int num=n[i]-'0';
  if(num%2==0){
   new_str1+=to_string(num/2);
   new_str2+=to_string(num/2);
  }
  else{
   if(iter%2==0){
    new_str1+=to_string(num/2);
    new_str2+=to_string((num/2)+1);
   }
   else{
    new_str1+=to_string((num/2)+1);
    new_str2+=to_string(num/2);
   }
   iter++;
  }
 }
 cout<<stoi(new_str1)<<" "<<stoi(new_str2)<<endl;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  int t;
  cin>>t;
  //t=1;
  while(t--){
   solve();
  }
    return 0; 
} 