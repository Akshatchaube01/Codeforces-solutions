#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
void solve(int tc) {
    int n;
    scanf("%d", &n);
 
    int best = 1;
 
    for (int x = 2; x * x <= n && x < n; x++) {
        if (n % x == 0) {
            best = max(best, x);
            best = max(best, n / x);
        }
    }
 
    printf("%d %d\n", best, n - best);
}
 
int main() {
    int T = 1;
    cin >> T;
 
    for (int tc = 1; tc <= T; tc++) {
        solve(tc);
    }
}