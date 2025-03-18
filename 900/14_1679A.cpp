#include <cmath>
#include <iostream>
#define int unsigned long long

void solve() {
    int n;
    std::cin >> n;

    // i have total no of wheels (n)
    // i need to find the min & max no of buses
    // each bus has 4 or 6 wheels

    // n = 4x + 6y;
    // i have ax + by = c;
    // where a, b, c are constants pos int
    // find x and y
    // x => no of buses with 4 wheels
    // y => no of buses with 6 wheels
    // max when x >>
    // min when y >>

    if (n % 2 == 1 || n < 4) {
        std::cout << -1 << '\n';
        return;
    }

    int min = (n % 6 == 0) ? (n / 6) : (n / 6 + 1);
    int max = n / 4;

    std::cout << min << ' ' << max << '\n';
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