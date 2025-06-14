#include <cmath>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n);
    for (int& i : a) std::cin >> i;

    int min = 31;
    while (q--) {
        int x;
        std::cin >> x;

        if (x >= min) continue;
        min = x;

        x = (1 << x);

        for (int& y : a) {
            if (y % x == 0) y += x / 2;
        }
    }

    for (int i = 0; i < n; i++) std::cout << a[i] << " \n"[i == n - 1];
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
