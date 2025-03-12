#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int cnt = 0;
    int best = cnt;
    for (int i = 0; i < n - 1; i++) {
        if (abs(a[i] - a[i + 1]) <= k) {
            cnt++;
            best = std::max(best, cnt);
        } else {
            cnt = 0;
        }
    }

    std::cout << n - best - 1 << '\n';
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