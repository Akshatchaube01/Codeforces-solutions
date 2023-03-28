#include<bits/stdc++.h>
using namespace std;
#define TN() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define all(s) s.begin(),s.end()
const double pi = acos(-1);
typedef long long ll;
typedef unsigned long long ull;
int main(){
    TN();
    int tc;
    cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        int l = s.size();
        int f = 0;
        for(int i = l - 2; i >= 0; i--)
            if(f == 0 && (i == 0 || s[i] - '0' + s[i + 1] - '0' >= 10)){
                cout << s.substr(0, i);
                cout << s[i] - '0' + s[i + 1] - '0';
                cout << s.substr(i + 2, l - i - 2)<<endl;
                f = 1;
            }
    }
    return 0;
}
 