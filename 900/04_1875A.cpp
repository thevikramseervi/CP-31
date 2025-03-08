#include <iostream>
#include <vector>
#define int long long

void solve() {
    int a, b, n;
    std::cin >> a >> b >> n;

    std::vector<int> x(n);
    for (int i = 0; i < n; i++) {
        std::cin >> x[i];
    }

    int sec = b - 1;
    b = 1;
    for (int i = 0; i < n; i++) {
        b = std::min(b + x[i], a);
        sec += b - 1;
        b = 1;
    }

    std::cout << sec + 1 << '\n';
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