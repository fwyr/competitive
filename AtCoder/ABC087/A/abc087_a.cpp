#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int x, a, b; cin >> x >> a >> b;
    x -= a;
    cout << x - (x/b)*b;
}