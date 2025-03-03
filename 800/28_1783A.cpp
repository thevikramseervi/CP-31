#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.rbegin(), a.rend());

    if (a[0] == a[n - 1]) {
        std::cout << "NO" << '\n';
        return;
    }

    if (a[0] == a[1]) {
        std::swap(a[1], a[n - 1]);
    }

    std::cout << "YES\n";
    for (int x : a) {
        std::cout << x << " ";
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