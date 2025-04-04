#include <cmath>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, x;
    std::cin >> n >> x;

    int sum = 0;
    int max = 0;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        sum += a[i];
        max += ceil((double)a[i] / x);
    }

    int min = ceil((double)sum / x);

    std::cout << min << ' ' << max << '\n';
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
