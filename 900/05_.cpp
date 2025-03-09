#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (n & 1) {
        std::cout << 4 << '\n';
        std::cout << 1 << ' ' << n - 1 << '\n';
        std::cout << 1 << ' ' << n - 1 << '\n';
        std::cout << n - 1 << ' ' << n << '\n';
        std::cout << n - 1 << ' ' << n << '\n';
    }

    else {
        std::cout << 2 << '\n';
        std::cout << 1 << " " << n << '\n';
        std::cout << 1 << " " << n << '\n';
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