#include <chrono>
#include <iostream>
#include <numeric>
#include <vector>

#define int long long

void solve() {
    int n, sum = 0;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) {
        std::cin >> x;
        sum += x;
    }

    int psum = 0, ssum = sum, res = 1;
    for (int i = 0; i < n - 1; i++) {
        psum += a[i];
        ssum -= a[i];
        res = std::max(res, std::gcd(psum, ssum));
    }

    std::cout << res << '\n';
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
