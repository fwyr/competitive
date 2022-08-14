#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    map<int, int> M;
    set<int> S;
    int n, x, t=0; cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (M[x] == 0) M[x] = 1;
        else M[x] = 0;
        S.insert(x);
    }

    for (auto c: S) {
        t += M[c];
    }

    cout << t;
}