// Little elephant and numbers - Problem B - Rated 1300 
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define ld long double
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout);
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
 
void solve() {
    ll i, j;
    ll n; cin >> n;
    string s = to_string(n);
    map<char, int> m;
    for (i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
    int ans = 0;
    for (i = 1;i <= sqrt(n);i++) {
        if (n % i==0) {
            if (i==n/i) {
                string x = to_string(i);
                for (j = 0; j <x.length(); j++) {
                    if (m[x[j]]){ans++; break;}
                }
            } else {
                string x = to_string(i);
                for (j = 0; j <x.length(); j++) {
                    if (m[x[j]]){ans++; break;}
                }
                string y = to_string(n / i);
                for (j = 0; j <y.length(); j++) {
                    if (m[y[j]]){ans++; break;}
                }
            }
        }
    }
    cout << ans << endl;
}
 
#undef int
int main(){ 
    SPEED; 
    cout.precision(8); 
    cout << fixed; 
  solve();
    return 0; 
} 