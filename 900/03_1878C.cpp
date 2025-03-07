#include <iostream>
#define int long long

void solve() {
    int n, k, x;
    std::cin >> n >> k >> x;

    int min_sum = (k * (k + 1)) / 2;
    int max_sum = ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2);

    if (x < min_sum || x > max_sum) {
        std::cout << "NO\n";
    } else {
        std::cout << "Yes\n";
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

    std::cout << '\n';
    return 0;
}