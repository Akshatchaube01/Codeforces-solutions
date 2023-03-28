//A. Fair Playoff
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    sort(vec.begin(),vec.end());
    if((vec[3]==a && vec[2]==b)||(vec[2]==a && vec[3]==b)){
     cout<<"No"<<endl;
    }
    else if((vec[3]==c && vec[2]==d)||(vec[2]==c && vec[3]==d)){
     cout<<"No"<<endl;
    }
    else{
     cout<<"Yes"<<endl;
    }
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