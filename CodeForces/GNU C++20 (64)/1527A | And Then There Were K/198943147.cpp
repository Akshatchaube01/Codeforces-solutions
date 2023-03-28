//1527A - And Then There Were K
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve()
{
    ll n;
    cin >> n;
    ll cnt=0;
    while(n!=0){
        cnt++;
        n=n/2;
    }
    cout << (1<<(cnt-1))-1 << endl;
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