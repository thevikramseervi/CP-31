#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n, x;
    std::cin >> n >> x;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int mn = a[0];
    int mx = a[0];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        mn = std::min(a[i], mn);
        mx = std::max(a[i], mx);

        if (mx - mn > 2 * x) {
            cnt++;
            mn = mx = a[i];
        }
    }

    std::cout << cnt << '\n';
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
