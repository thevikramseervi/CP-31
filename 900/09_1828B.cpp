#include <iostream>
#include <numeric>

void solve() {
    int n, res = 0;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        int x;
        std::cin >> x;
        res = std::gcd(abs(x - i), res);
    }

    std::cout << res << '\n';
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