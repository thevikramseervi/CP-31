#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    bool is_non_decreasing = true;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (i != 0 && a[i] < a[i - 1]) {
            is_non_decreasing = false;
        }
    }

    if (a[n - 2] > a[n - 1]) {
        std::cout << -1 << '\n';
        return;
    }

    if (is_non_decreasing) {
        std::cout << 0 << '\n';
        return;
    }

    if (a[n - 1] < 0) {
        std::cout << -1 << '\n';
        return;
    }

    std::cout << n - 2 << '\n';
    for (int i = 0; i < n - 2; i++) {
        std::cout << i + 1 << ' ' << n - 1 << ' ' << n << '\n';
    }
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input.txt", "r", stdin);
    freopen("/home/vikram/code/output.txt", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
