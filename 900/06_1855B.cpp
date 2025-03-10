#include <iostream>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    int x = 2;
    while (n % x == 0) {
        x++;
    }

    std::cout << x - 1 << '\n';
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