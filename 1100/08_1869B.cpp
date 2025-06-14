#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, k, a, b;
    std::cin >> n >> k >> a >> b;

    std::vector<int> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> x[i] >> y[i];
    }

    int direct_cost = std::abs(x[a] - x[b]) + std::abs(y[a] - y[b]);

    int acost = a <= k ? 0 : 1e10;
    int bcost = b <= k ? 0 : 1e10;

    if (acost)
        for (int i = 1; i <= k; i++)
            acost =
                std::min(acost, std::abs(x[i] - x[a]) + std::abs(y[i] - y[a]));

    if (bcost)
        for (int i = 1; i <= k; i++)
            bcost =
                std::min(bcost, std::abs(x[i] - x[b]) + std::abs(y[i] - y[b]));

    std::cout << std::min(direct_cost, acost + bcost) << '\n';
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
