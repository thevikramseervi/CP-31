#include <iostream>

void solve() {
    int x, k;
    std::cin >> x >> k;

    if (x % k != 0) {
        std::cout << 1 << '\n';
        std::cout << x << '\n';
        return;
    }

    std::cout << 2 << '\n';
    std::cout << x - 1 << ' ' << 1 << '\n';
}

int main() {
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