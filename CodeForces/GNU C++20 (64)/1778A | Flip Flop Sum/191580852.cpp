#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll count=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        count+=v[i];
    }
    ll flag=0;
    for(ll i=1;i<n;i++){
        if(v[i]==-1 && v[i-1]==-1){
            flag=1;
            break;
        }
    }
    if(flag) cout<<count+4<<endl;
    else{
        if(count==n)cout<<count-4<<endl;
        else{
            cout<<count<<endl;
        }
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