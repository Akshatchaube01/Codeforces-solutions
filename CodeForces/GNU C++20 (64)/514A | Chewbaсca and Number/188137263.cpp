//A. Chewbaсca and Number Problem A Rated 1200 
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
    string new_str="";
    if(9-(str[0]-'0')==0 || 9-(str[0]-'0')>(str[0]-'0')){
        new_str+=to_string(str[0]-'0');
    }
    else{
        new_str+=to_string(9-(str[0]-'0'));
    }
    for(int i=1;i<str.size();i++){
        int digit;
        digit = str[i] - '0';
        if(9-digit<digit){
            new_str+=to_string(9-digit);
        }
        else{
            new_str+=to_string(digit);
        }
    }
    cout<<new_str<<endl;    
}
 
#undef int
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
    solve();
    return 0; 
} 