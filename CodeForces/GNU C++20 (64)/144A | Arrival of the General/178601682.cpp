#include <bits/stdc++.h> 
using namespace std;
#define vi vector<long long> 
 
int maximum(vi &A,int n){
 int max=0;
 for(int i=0;i<n;i++){
  if(A[i]>A[max]){
   max=i;
  }
 }
 return max;
}
 
int minimum(vi &A,int n){
 int min=n-1;
 for(int i=0;i<n;i++){
  if(A[i]<=A[min]){
   min=i;
  }
 }
 return min;
}
 
void solve(){
    int n;cin>>n;
    vi v(n);
    for(auto &x:v)cin>>x;    
    int maxiindex = maximum(v,n) ;       
    int miniindex = minimum(v,n);
    if(maxiindex<miniindex){
        cout<< maxiindex + (n-1-miniindex);
        return;
    }
    cout<<maxiindex + (n-2-miniindex);
 
 
}
signed main() {
solve();
}