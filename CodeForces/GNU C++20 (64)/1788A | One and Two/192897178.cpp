#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
    int n;
    cin>>n;
    int arr[n];
    int one=0;
    int two=0; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) one++;
        else two++;
    }
    if(two==0){
        cout<<1<<endl;
        return;
    }
    if(two%2){
        cout<<-1<<endl;
        return;
    }
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==2) cnt++;
        if(cnt==(two/2)){
            cout<<i+1<<endl;
            return;
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