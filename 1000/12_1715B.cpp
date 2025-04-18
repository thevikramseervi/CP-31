#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, k, b, s;
    std::cin >> n >> k >> b >> s;

    int smin = b * k;
    int smax = b * k + n * (k - 1);
    if (s < smin || s > smax) {
        std::cout << -1 << '\n';
        return;
    }

    std::vector<int> a(n);
    a[0] = b * k;
    int diff = s - smin;

    for (int i = 0; i < n; i++) {
        a[i] += std::min(diff, k - 1);
        diff -= std::min(diff, k - 1);
    }

    for (int x : a) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
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
