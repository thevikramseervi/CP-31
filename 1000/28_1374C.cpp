#include <iostream>

void solve() {
    int x, y, n;
    std::cin >> x >> y >> n;

    // k mod x = y; // find max value of k
    int r = n % x;
    if (r >= y) {
        std::cout << n - r + y << std::endl;
    } else {
        std::cout << n - x + y - r << std::endl;
    }
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
