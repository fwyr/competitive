#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    vector<int> V(100010);

    int n, a, t=0; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        V[a]++;
    }

    for (int i = 0; i < 100000; i++) {
        t = max(t, V[i] + V[i+1] + V[i+2]);
    }

    cout << t;
}