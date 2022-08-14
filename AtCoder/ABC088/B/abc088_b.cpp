#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
signed main() {
    int n, t=0; cin >> n;
    vector<int> V(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    sort(V.rbegin(), V.rend());
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) t += V[i];
        else t -= V[i];
    }

    cout << t;
}