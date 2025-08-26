#include <iostream>

void solve() {
    int n, k;
    std::cin >> n >> k;
    k--;

    int ans = 0;
    if (n & 1) {
        ans = (k / (n / 2) + k) % n;
    } else {
        ans = k % n;
    }

    ans++;
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
