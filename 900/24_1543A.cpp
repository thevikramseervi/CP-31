#include <iostream>

void solve() {
    long long a, b;
    std::cin >> a >> b;

    if (a == b) {
        std::cout << 0 << ' ' << 0 << '\n';
        return;
    }

    long long dif = std::abs(a - b);
    long long res = std::min(a % dif, dif - a % dif);

    std::cout << dif << ' ' << res << '\n';
}

signed main(void) {
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