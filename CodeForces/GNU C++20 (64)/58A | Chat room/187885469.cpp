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
    int cnt=0;
    for(int i=0;i<str.length();i++){
       if(cnt==0 && str[i]=='h'){
        cnt++;
       }
       else if(cnt==1 && str[i]=='e'){
        cnt++;
       }
       else if(cnt==2 && str[i]=='l'){
        cnt++;
       }
       else if(cnt==3 && str[i]=='l'){
        cnt++;
       }
       else if(cnt==4 && str[i]=='o'){
        cnt++;
       }
    }
    if(cnt==5){
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
    solve();
    return 0; 
} 