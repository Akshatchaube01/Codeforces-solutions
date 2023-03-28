//A. Sum of Round Numbers
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<str.size();i++){
     if(str[i]!='0'){
      count++;
     }
    }
    cout<<count<<endl;
    int n=stoi(str);
    int numb=0;
    while(n>0){
     int m=n%10;
     int number=m*pow(10,numb);
     if(number!=0){
      cout<<number<<" ";
     }
     n=n/10;
     numb++;
    }
    cout<<endl;
    
}
#undef int
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