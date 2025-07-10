#include <iostream>
#define int long long

void solve() {
    int n, x, ans = -1;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        if (x != i) {
            if (ans == -1)
                ans = i;
            else
                ans &= i;
        }
    }

    std::cout << ans << '\n';
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