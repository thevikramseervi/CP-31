#include <algorithm>
#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> a(m, std::vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[j][i];
        }
    }

    for (auto& x : a) {
        std::sort(x.rbegin(), x.rend());
    }

    int ans = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans += (n - (2 * j + 1)) * a[i][j];
        }
    }

    std::println("{}", ans);
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
