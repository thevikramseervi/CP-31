#include <iostream>
#include <vector>

void solve() {
    int n, ans = -1000000007;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        ans = std::max(ans, a[(n + i - 1) % n] - a[i]);
    }

    for (int i = 1; i < n; i++) {
        ans = std::max(ans, a[i] - a[0]);
    }

    for (int i = 0; i < n - 1; i++) {
        ans = std::max(ans, a[n - 1] - a[i]);
    }

    std::cout << ans << '\n';
}

int main() {
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