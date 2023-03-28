//G1. Teleporters (Easy Version)
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
 ll n;
    cin>>n;
    ll arr[n];
    ll count=0;
    ll mini=INT_MAX;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=0){
            count++;
        }
        if(mini>abs(arr[i])){
            mini=abs(arr[i]);
        }
    }
    ll new_count=0;
    sort(arr, arr + n);
    if(count%2==0){
        for(ll i=0;i<n;i++){
            new_count+=abs(arr[i]);
        }
        cout<<new_count<<endl;
        return;
    }
    else{
        for(ll i=0;i<n;i++){
            new_count+=abs(arr[i]);
        }
        new_count-=(mini*2);
        cout<<new_count<<endl;
        return;
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