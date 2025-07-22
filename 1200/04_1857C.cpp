#include <algorithm>
#include <iostream>
#include <print>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    int m = (n * (n - 1)) / 2;

    std::vector<int> b(m);
    for (int& x : b) std::cin >> x;

    std::ranges::sort(b);

    int k = n;
    for (int i = 0; i < m; i += k) {
        std::print("{} ", b[i]);
        k--;
    }
    std::println("{}", b[m - 1]);
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
