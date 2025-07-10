#include <iostream>
#include <vector>

void solve() {
    int n, l, r;
    std::cin >> n >> l >> r;

    std::vector<int> a;
    a.push_back(l);
    for (int i = 2; i <= n; i++) {
        int inc = (l % i == 0) ? 0 : i - (l % i);
        if (l + inc <= r) {
            a.push_back(l + inc);
        } else {
            std::cout << "No\n";
            return;
        }
    }

    std::cout << "Yes\n";
    for (int& x : a) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
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

    for (int i = 1; i <= tt; i++) {
        solve();
    }

    return 0;
}