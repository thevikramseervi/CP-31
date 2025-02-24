#include <iostream>

void solve() {
    long long n, k;
    std::cin >> n >> k;

    if (n % 2 == 1 && k % 2 == 0) {
        std::cout << "NO\n";
    }

    else {
        std::cout << "YES\n";
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