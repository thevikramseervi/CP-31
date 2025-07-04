#include <chrono>
#include <iostream>
#define int long long

void solve() {
    int n, x;
    std::cin >> n;

    int neg = 0, min = 1e9, sum = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        if (x < 0) neg++;
        sum += std::abs(x);
        min = std::min(min, std::abs(x));
    }

    if (neg % 2 == 0)
        std::cout << sum << '\n';
    else
        std::cout << sum - 2 * min << '\n';
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
