#include <chrono>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, k, cnt = 0;
    std::cin >> n >> k;

    int m = n * n;

    std::vector<int> a(m);
    for (int& x : a) std::cin >> x;

    for (int i = 0; i < m / 2; i++) {
        if (a[i] != a[m - 1 - i]) {
            cnt++;
        }
    }

    if (cnt > k) {
        std::cout << "NO\n";
        return;
    }

    int rem = k - cnt;
    if (rem % 2 == 0 || m % 2 == 1) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

signed main() {
    auto begin = std::chrono::high_resolution_clock::now();
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input.txt", "r", stdin);
    freopen("/home/vikram/code/output.txt", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) solve();

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> seconds = end - begin;
    std::cerr << "Time measured: " << seconds.count() << " seconds.\n";
}
