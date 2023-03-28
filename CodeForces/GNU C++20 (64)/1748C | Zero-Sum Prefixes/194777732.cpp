//C. Zero-Sum Prefixes
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 ll n;
    cin>>n;
    ll a[n];
    int ct=0;
    int ctt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ans=0;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            map<ll,ll>m;
            i++;
            ll summ=0;
            ll maxxx=1;
            while(i<n && a[i]!=0){
                summ+=a[i];
                m[summ]++;
                maxxx=max(maxxx,m[summ]);
                i++;
            }
            if(m[0]==maxxx)ans++;
            ans=ans+maxxx;
            if(i!=n && a[i]==0){
                i--;
            }
       }
       else{
        sum=sum+a[i];
        if(sum==0){
            ans++;
        }
       }
    }
    cout<<ans<<endl;
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