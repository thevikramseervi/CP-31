#include <iostream>
#define int long long
using namespace std;

void solve() {
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    cout << -sum << "\n";
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