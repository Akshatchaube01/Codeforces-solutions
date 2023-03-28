//161B - Squares and Cubes
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);

void solve(){
	int n;
	cin>>n;
	set<int>sett;
    for(int i=1;i*i<=n;i++){
        sett.insert(i*i);
    }
    for(int i=1;i*i*i<=n;i++){
        sett.insert(i*i*i);
    }
    cout<<sett.size()<<endl;
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