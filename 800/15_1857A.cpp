#include <iostream>
#define int long long
using namespace std;

void solve() {
    int n, x, ans = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2) {
            ans++;
        }
    }

    if (ans % 2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    cin >> tt;

    while (tt--) {
        solve();
    }

    cout << '\n';
    return 0;
}