#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<std::pair<int, int>> a(n);

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;

        if (x % k) {
            a[i].first = x % k;
        } else {
            a[i].first = k;
        }

        a[i].second = i + 1;
    }

    std::stable_sort(a.begin(), a.end(), [](const auto& x, const auto& y) {
        return x.first > y.first;
    });

    for (auto x : a) {
        std::cout << x.second << ' ';
    }

    std::cout << '\n';
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

    return 0;
}
