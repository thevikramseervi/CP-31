#include <algorithm>
#include <iostream>
#include <print>
#include <set>
#include <vector>
#define int long long

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<std::vector<int>> max_diff(k + 1);
    std::vector<std::pair<int, int>> c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> c[i].first;
        c[i].second = i + 1;
        if (max_diff[c[i].first].size() == 0) {
            max_diff[c[i].first].push_back(i + 1);
        }
    }

    std::ranges::sort(c);

    for (int i = 1; i < n; i++) {
        if (c[i].first == c[i - 1].first) {
            max_diff[c[i].first].push_back(c[i].second - c[i - 1].second);
        }
    }

    std::set<int> set;
    for (int i = n - 1; i >= 0; i--) {
        if (set.count(c[i].first) == 0) {
            max_diff[c[i].first].push_back(n - c[i].second + 1);
            set.insert(c[i].first);
        }
    }

    for (auto& x : max_diff) {
        std::sort(x.rbegin(), x.rend());
    }

    int best = n - 1;

    for (int i = 1; i <= k; i++) {
        if (max_diff[i].empty()) continue;

        int ans = (max_diff[i][0] - 1) / 2;
        if (max_diff[i].size() >= 2) {
            ans = std::max(ans, max_diff[i][1] - 1);
        }

        best = std::min(best, ans);
    }

    std::println("{}", best);
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
