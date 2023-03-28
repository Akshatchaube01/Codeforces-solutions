#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
void solve(){
    int num;
    cin>>num;
    vector<int> vec(num);
    for(int i=0;i<vec.size();i++){
     cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
     cout<<vec[i]<<" ";
    }
}
#undef int
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
    solve();
    return 0; 
} 