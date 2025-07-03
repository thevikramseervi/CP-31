#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, c, ans = 0;
    std::cin >> n >> c;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i] += i + 1;
    }

    std::sort(a.begin(), a.end());

    for (int i = 0; i < n; i++) {
        if (c >= a[i]) {
            c -= a[i];
            ans++;
        } else {
            break;
        }
    }

    std::cout << ans << '\n';
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
