#include <iostream>
#define int long long
#define M 1000000007

void solve() {
    int n;
    std::cin >> n;

    int ans = (((((n * (n + 1)) % M) * ((4 * n - 1) % M)) % M) * 337) % M;
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