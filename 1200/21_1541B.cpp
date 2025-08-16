#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> a[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = a[i] - i; j <= n; j += a[i]) {
            if (i < j && j >= 0 && a[i] * a[j] == i + j) {
                ans++;
            }
        }
    }

    std::cout << ans << '\n';
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