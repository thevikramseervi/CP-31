#include <algorithm>
#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, x;
    std::cin >> n >> x;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    std::sort(a.begin(), a.end());

    std::vector<int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (x >= prefix[i]) {
            cnt += (x - prefix[i]) / (i + 1) + 1;
        }
    }

    std::println("{}", cnt);
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input.txt", "r", stdin);
    freopen("/home/vikram/code/output.txt", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
