#include <iostream>
#include <vector>

void solve() {
    int n, x;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        std::cout << n - x + 1 << ' ';
    }

    std::cout << '\n';
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