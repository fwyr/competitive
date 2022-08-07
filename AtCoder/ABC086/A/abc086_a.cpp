#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int a, b; cin >> a >> b;
    if (a*b % 2 == 0) cout << "Even";
    else cout << "Odd";
}