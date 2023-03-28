//A. Stone Game
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 int n;
 cin>>n;
 vector<int> vec(n);
 for(int i=0;i<n;i++){
  int x;
  cin>>x;
  vec[i]=x;
 }
 int max_pos=max_element(vec.begin(),vec.end())-vec.begin();
 int min_pos=min_element(vec.begin(),vec.end())-vec.begin();
 cout << min({max(max_pos, min_pos) + 1,(n - 1) - min(max_pos, min_pos) + 1,(n - 1) - max_pos + min_pos + 2,(n - 1) - min_pos + max_pos + 2}) << "\n";
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