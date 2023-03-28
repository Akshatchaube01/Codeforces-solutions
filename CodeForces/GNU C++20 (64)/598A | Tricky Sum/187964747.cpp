#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
void solve(vector<int> vec){
    ll num;
    cin>>num;
    ll sum=(num*(num+1))/2;
    for(int i=0;i<vec.size();i++){
     if(vec[i]<=num){
      sum-=(2*vec[i]);
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
  vector<int> vec;
  for(int i=0;i<32;i++){
   vec.push_back(pow(2,i));
  }
  while(t--){
   solve(vec);
  }
    return 0; 
}