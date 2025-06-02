#include <iostream>

void solve() {
    int a, b;
    std::cin >> a >> b;

    int ans = 1e9;

    for (int i = 0; i < 30; i++) {
        if (b + i == 1) continue;

        int op = 0;
        int temp = a;

        while (temp != 0) {
            temp /= (b + i);
            op++;
        }

        ans = std::min(ans, op + i);
    }

    std::cout << ans << '\n';
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
