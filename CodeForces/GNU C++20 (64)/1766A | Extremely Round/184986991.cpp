#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std; 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
    int n;cin>>n;
    if(n<=9){
        cout<<n<<endl;
        return;
    }
    int temp = n;
    int cnt = 0;
    int divi = 10;
    while(n!=0){
        n=n/divi;
        cnt++;
    }
    int ans = 9 + ((cnt-2)*9) + (temp/(pow(10,cnt-1)));
    cout<<ans<<endl;     
 
}
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  int t;
  cin>>t;
  while(t--){
   solve();
  }
    return 0; 
} 