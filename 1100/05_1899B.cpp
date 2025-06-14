#include <climits>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, ans = -1;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    for (int k = 1; k <= n; k++) {
        if (n % k) continue;
        int min = LONG_LONG_MAX;
        int max = -1;
        int diff = -1;

        for (int i = 0; i < n; i += k) {
            int sum = 0;
            for (int j = i; j < i + k; j++) sum += a[j];
            max = std::max(sum, max);
            min = std::min(sum, min);
            diff = max - min;
        }

        ans = std::max(ans, diff);
    }
    std::cout << ans << '\n';
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