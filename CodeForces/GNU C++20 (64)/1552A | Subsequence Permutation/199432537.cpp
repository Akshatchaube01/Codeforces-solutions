//A. Subsequence Permutation
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
    string new_str=str;
    sort(str.begin(),str.end());
    int count=0;
    for(int i=0;i<str.size();i++){
        if(new_str[i]!=str[i])count++;
        
    }
    cout<<count<<endl;
    return;
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