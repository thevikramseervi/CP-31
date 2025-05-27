#include <iostream>
#include <set>

void solve() {
    int n, x;
    std::cin >> n;

    std::set<int> set;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        set.insert(x);
    }

    if (set.size() != n) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
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
