#include <iostream>

void solve() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (d < b) {
        std::cout << -1 << '\n';
        return;
    }

    int ans = d - b;
    a += d - b;
    b += ans;

    if (c > a) {
        std::cout << -1 << '\n';
        return;
    }

    ans += a - c;

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