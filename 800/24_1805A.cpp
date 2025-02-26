#include <iostream>
#include <vector>

void solve() {
    // xor -> same:0, diff:1
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = a[i] ^ ans;
    }

    if (ans == 0) {
        std::cout << 0 << "\n";
    } else {
        if (n % 2 == 1) {
            std::cout << ans << '\n';
        } else {
            std::cout << -1 << '\n';
        }
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