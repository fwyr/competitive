#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
void solve() {
    double a, b, x; cin >> a >> b >> x;
    cout << ceil((b-a) / x) << endl;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) solve();
}