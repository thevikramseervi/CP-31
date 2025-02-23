#include <cmath>
#include <iostream>

void solve() {
    int n, sum = 0, mul = 1;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        sum += x;
        mul *= x;
    }

    // std::cout << sum << '\t' << mul << '\n';

    int ans = ceil(abs(sum) / 2.0);

    if (sum >= 0 && mul == 1) {
        std::cout << 0 << '\n';
    }

    else if (sum >= 0 && mul != 1) {
        std::cout << 1 << '\n';
    }

    else if (sum < 0 && mul == 1) {
        if (ans % 2) {
            ans++;
        }
        std::cout << ans << '\n';
    }

    else {
        if (ans % 2 == 0) {
            ans++;
        }
        std::cout << ans << '\n';
    }
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