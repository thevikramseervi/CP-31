#include <iostream>

void solve() {
    long long x, n;
    std::cin >> x >> n;

    long long ans;

    if (n % 4 == 1) {
        ans = -n;
    } else if (n % 4 == 2) {
        ans = 1;
    } else if (n % 4 == 3) {
        ans = n + 1;
    } else if (n % 4 == 0) {
        ans = 0;
    }

    if (x & 1) {
        ans = x - ans;
    } else {
        ans = x + ans;
    }

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