#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#define int long long

void solve() {
    int n, p;
    std::cin >> n >> p;

    int max = n * p;

    std::vector<std::pair<int, int>> c(n);

    for (int i = 0; i < n; i++) {
        std::cin >> c[i].second;
    }

    for (int i = 0; i < n; i++) {
        std::cin >> c[i].first;
    }

    std::sort(c.begin(), c.end());

    int cost = p;
    int remaining = n - 1;
    for (int i = 0; i < n - 1; i++) {
        if (c[i].first >= p || remaining == 0) {
            break;
        }
        cost += std::min(remaining, c[i].second) * c[i].first;
        remaining = remaining - std::min(remaining, c[i].second);
    }

    if (remaining) {
        cost += remaining * p;
    }

    std::cout << std::min(max, cost) << '\n';
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