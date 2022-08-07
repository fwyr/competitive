#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    string a, b; cin >> a >> b;
    string c = a + b;
    int x = stoi(c), y = sqrt(x);
    if (y * y == x) cout << "Yes\n";
    else cout << "No\n";
}