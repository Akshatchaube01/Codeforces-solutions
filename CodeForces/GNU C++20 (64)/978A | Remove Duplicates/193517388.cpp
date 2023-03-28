// Remove Duplicates  - DIV 2 A
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 vector<int> vec1;
 vector<int> vec2;
 set<int> set1;
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  vec1.push_back(x);
  set1.insert(x);
 }
 cout<<set1.size()<<endl;
 for(int i=vec1.size()-1;i>=0;i--){
  if(set1.find(vec1[i])!=set1.end()){
   vec2.push_back(vec1[i]);
   set1.erase(vec1[i]);
  }
 }
 for(int i=vec2.size()-1;i>=0;i--){
  cout<<vec2[i]<<" ";
 }
 cout<<endl;
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  solve();   
  return 0; 
} 