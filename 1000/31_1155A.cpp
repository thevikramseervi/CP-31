#include <iostream>

void solve() {
    int n;
    std::string s;
    std::cin >> n >> s;

    // find 2 consecutive letters such that first is greater than second
    for (int i = 1; i < n; i++) {
        if (s[i] < s[i - 1]) {
            std::cout << "Yes\n";
            std::cout << i << ' ' << i + 1 << '\n';
            return;
        }
    }

    std::cout << "No\n";
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    // std::cin >> tt;

    while (tt--) {
        solve();
    }

    std::cout << '\n';
    return 0;
}
