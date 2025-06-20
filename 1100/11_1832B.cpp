#include <algorithm>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    std::sort(a.begin(), a.end());

    std::vector<int> prefix(n + 1);
    prefix[0] = 0;
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    int ans = 0;

    for (int i = 0; i <= k; i++) {
        ans = std::max(ans, prefix[n - i] - prefix[2 * (k - i)]);
    }

    std::cout << ans << '\n';
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

    while (tt--) solve();
}
