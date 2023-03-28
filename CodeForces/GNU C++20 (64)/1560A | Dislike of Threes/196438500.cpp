//A. Dislike of Threes
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
vector<int> vec;
 
void func(){
 
 int n=1667;
 for(int i=1;i<n;i++){
  int m=i%10;
  if(i%3!=0 && m!=3){
   vec.push_back(i);
  }
 }
}
 
void solve(){
 
 int n;
 cin>>n;
 cout<<vec[n-1]<<endl;
 
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed;
    func();
  int t;
  cin>>t;
  //t=1;
  while(t--){
   solve();
  }
    return 0; 
} 