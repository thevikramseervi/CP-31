#include <climits>
#include <iostream>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    int res = LONG_LONG_MAX;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (abs(x) < res) {
            res = abs(x);
        }
    }

    cout << res << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    // cin >> tt;

    while (tt--) {
        solve();
    }
    
    return 0;
}