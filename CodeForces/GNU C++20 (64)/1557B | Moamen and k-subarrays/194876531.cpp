#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
 
void solve(){
    int n,k;
    cin>>n>>k;
    int count=1;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec[i].first=x;
        vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
    for(int i=1;i<n;i++){
        if((vec[i-1].second+1)!=(vec[i].second)){
            count++;
        }
    }
    if(count<=k){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
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