#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> c(n);
    for (int& x : c) std::cin >> x;

    std::sort(c.begin(), c.end());

    if (c[0] != 1) {
        std::cout << "NO\n";
        return;
    }

    std::vector<int> prefix(n + 1);
    prefix[0] = c[0];

    for (int i = 1; i < n; i++) {
        // can i construct c[i] using c[0....i-1];
        if (c[i] > prefix[i - 1]) {
            std::cout << "NO\n";
            return;
        }
        prefix[i] = prefix[i - 1] + c[i];
    }
    std::cout << "YES\n";
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
