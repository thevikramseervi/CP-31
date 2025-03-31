#include <cmath>
#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    int zerocnt = 0, onecnt = 0;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        if (x == 0) {
            zerocnt++;
        } else if (x == 1) {
            onecnt++;
        }
    }

    long long ans = std::pow(2, zerocnt) * onecnt;

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

    return 0;
}