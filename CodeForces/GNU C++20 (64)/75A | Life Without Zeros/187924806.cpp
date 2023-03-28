// Life without zeroes
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
    string str1,stro1;
    string str2,stro2;
    string stro3;
    cin>>str1;
    cin>>str2;
    int s1,s2,s3;
    s1=stoi(str1);
    s2=stoi(str2);
    s3=s1+s2;
    stro3=to_string(s3);
    stro1="";
    stro2="";
    string strzz="";
    for(int i=0;i<stro3.size();i++){
        if(stro3[i]!='0'){
            strzz+=stro3[i];
        }
    }
    for(int i=0;i<str1.size();i++){
        if(str1[i]!='0'){
            stro1+=str1[i];
        }
    }
    for(int i=0;i<str2.size();i++){
        if(str2[i]!='0'){
            stro2+=str2[i];
            }
    }
    int s4=stoi(stro1);
    int s5=stoi(stro2);
    int s6=s4+s5;
    int s7=stoi(strzz);
    if(s6==s7){
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