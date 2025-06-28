#include <chrono>
#include <iostream>
#include <vector>

void solve() {
    int n, l = -1, r = -1;
    std::cin >> n;

    std::vector<int> a(n), b(n);
    for (int& x : a) std::cin >> x;
    for (int& x : b) std::cin >> x;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            l = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != b[i]) {
            r = i;
            break;
        }
    }

    for (int i = l - 1; i >= 0; i--) {
        if (b[i] <= b[i + 1])
            l--;
        else
            break;
    }

    for (int i = r + 1; i < n; i++) {
        if (b[i] >= b[i - 1])
            r++;
        else
            break;
    }

    std::cout << l + 1 << ' ' << r + 1 << '\n';
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
