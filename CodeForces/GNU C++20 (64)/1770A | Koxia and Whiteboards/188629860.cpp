//Koxia and Whiteboards Problem A
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
    int n,m;
    cin>>n>>m;
    vector<long long> vec(n+m);
    for(int i=0;i<n+m;++i){
     cin>>vec[i];
    }
    sort(vec.begin(),vec.end()-1);
    reverse(vec.begin(),vec.end());
    ll sum=0;
    for(int i=0;i<n;++i){
     sum+=vec[i];
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
  //t=1;
  while(t--){
   solve();
  }
    return 0; 
} 