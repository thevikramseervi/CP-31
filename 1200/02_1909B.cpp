#include <iostream>
#include <set>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int k = 1; k <= 1e18; k *= 2) {
        std::set<int> set;
        for (int i = 0; i < n; i++) {
            set.insert(a[i] % k);
        }
        if (set.size() == 2) {
            std::cout << k << '\n';
            return;
        }
    }
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
