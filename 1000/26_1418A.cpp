#include <iostream>
#define int long long

int ceil(int a, int b) { return (a + b - 1) / b; }

void solve() {
    int x, y, k;
    std::cin >> x >> y >> k;

    int s = y * k + k - 1;
    int n = ceil(s, (x - 1));

    std::cout << n + k << '\n';
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
