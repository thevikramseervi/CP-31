#include <iostream>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    int ans = 1;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0) {
            ans = std::max(ans, n / d);
        }
    }

    std::cout << ans << ' ' << n - ans << '\n';
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) {
        solve();
    }

    std::cout << '\n';
    return 0;
}