//Quasi Binary qUESTION - 1400 Rated Problem- Problem B 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
void solve(){
 string str;
 cin>>str;
 
 int new_num;
 int count=0;
 vector<string> vec;
 while(stoi(str)!=0){
  string new_str="";
  for(int i=0;i<str.size();i++){
   if(str[i]!='0'){
    new_str+='1';
   }
   else{
    new_str+='0';
   }
  }
  count++;
  vec.push_back(new_str);
  new_num=stoi(str)-stoi(new_str);
  str=to_string(new_num);
 }
 cout<<count<<endl;
 for(int i=0;i<vec.size();i++){
  cout<<vec[i]<<" ";
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