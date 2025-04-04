#include <cmath>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n * k);
    for (int i = 0; i < n * k; i++) {
        std::cin >> a[i];
    }

    // so i need to divide og array into k arrays each of length n;
    // find median of each of the k arrays
    // sum of medians should be max

    int ans = 0;
    int cnt = 0;
    int mid = ceil(n / 2.0);

    for (int i = n * k - 1; cnt != k; i--) {
        i -= n;
        i += mid;
        ans += a[i];
        cnt++;
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

    while (tt--) {
        solve();
    }

    std::cout << '\n';
    return 0;
}