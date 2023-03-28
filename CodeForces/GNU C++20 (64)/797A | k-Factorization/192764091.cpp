// Problem A- K factorisation
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> vec;
    for(ll i=2;i*i<=n;i++){
        while(n%i==0){
            n/=i;
            vec.push_back(i);
        }
    }
    if(n>1){
        vec.push_back(n);
    }
    if(vec.size()<m){
        cout<<-1<<endl;
    }
    else{
        for(int i=1;i<m;i++){
            cout<<vec[i-1]<<" ";
        }
        int val=1;
        for(int i=m;i<=vec.size();i++){
            val*=vec[i-1];
        }
        cout<<val;
    }
    
}
 
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
     int t;
     t=1;
     while(t--){
         solve();
     }
    return 0; 
} 