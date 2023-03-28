#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ld long double
//#define M_PI (2*acos(0))
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    sort(arr+1,arr+n);
    for(int i=0;i<n;i++){
     int diiff=(arr[i]-arr[0])/2;
     if(arr[i]>arr[0]){
      arr[0]+=((arr[i]-arr[0])%2==0)?diiff:diiff+1;
     }
    }
    cout<<arr[0]<<endl;
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