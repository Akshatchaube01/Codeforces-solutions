#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
 int n;
 cin>>n;
    string str;
    cin>>str;
    int countT=0;
    int counti=0;
    int countu=0;
    int countm=0;
    int countr=0;
    int count=0;
    for(int i=0;i<str.size();i++){
     if(str[i]=='T')countT++;
     else if(str[i]=='i')counti++;
     else if(str[i]=='m')countm++;
     else if(str[i]=='u')countu++;
     else if(str[i]=='r')countr++;
     else{count++;}
    }
    if(countr+counti+countm+countu+countT+count==5 && counti==1 && countm==1 && countr==1 && countu==1 && countT==1){
     cout<<"YES"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
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