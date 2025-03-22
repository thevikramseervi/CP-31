#include <iostream>

void solve() {
    int a, b, c;
    std::cin >> a >> b >> c;

    // choose a positive integer m
    // multiply any one of a, b, c with m

    // b = (a + c) / 2;

    if (((a + c) % 2) == 0 && ((a + c) / 2 > 0) && (((a + c) / 2) % b == 0)) {
        std::cout << "YES\n";
    } else if ((2 * b - c) > 0 && (2 * b - c) % a == 0) {
        std::cout << "YES\n";
    } else if ((2 * b - a) > 0 && (2 * b - a) % c == 0) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
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