//Problem B - Taisia and Dice - Using Greedy Algorithm
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
void solve(){
    int n,s,r,j=1;
    cin>>n>>s>>r;
    int maxi=s-r;
    cout<<maxi<<" ";
    n--;
    while(r>0){
     cout<<r/n<<" ";
     r=r-(r/n);
     n--;
    }
    cout<<endl;
    
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