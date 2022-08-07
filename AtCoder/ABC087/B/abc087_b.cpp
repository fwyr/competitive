#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int a, b, c, x, y=0; cin >> a >> b >> c >> x;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (i*500 + j*100 + k*50 == x) y++;
            }
        }
    }
    cout << y;
}