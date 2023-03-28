#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
void solve(){
    string str;
    cin>>str;
    int sum=0;
    for(int i=0;i<str.size();i++){
     if(str[i]=='0'){
      sum+=0;
     }
     else if(str[i]=='1'){
      sum+=1;
     }
     else if(str[i]=='2'){
      sum+=2;
     }
     else if(str[i]=='3'){
      sum+=3;
     }
     else if(str[i]=='4'){
      sum+=4;
     }
     else if(str[i]=='5'){
      sum+=5;
     }
     else if(str[i]=='6'){
      sum+=6;
     }
     else if(str[i]=='7'){
      sum+=7;
     }
     else if(str[i]=='8'){
      sum+=8;
     }
     else if(str[i]=='9'){
      sum+=9;
     }
     else{
      sum+=0;
     }
    }
    cout<<sum<<endl;
}
 
#undef int
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  int t;
  cin>>t;
  while(t--){
   solve();
  }
    return 0; 
} 