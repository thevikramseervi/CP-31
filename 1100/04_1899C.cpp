#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    int best = a[0];
    int sum = std::max(a[0], 0LL);
    for (int i = 1; i < n; i++) {
        if (std::abs(a[i] % 2) == std::abs(a[i - 1] % 2))
            sum = a[i];
        else
            sum += a[i];
        best = std::max(best, sum);
        if (sum < 0) sum = 0;
    }

    std::cout << best << '\n';
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
