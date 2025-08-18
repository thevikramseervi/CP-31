#include <algorithm>
#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, k, x;
    std::cin >> n >> k >> x;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];

    std::ranges::sort(a);

    int groups = 1;
    std::vector<int> diff;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > x) {
            diff.push_back(a[i] - a[i - 1]);
            groups++;
        }
    }

    if (k == 0) {
        std::println("{}", groups);
        return;
    }

    std::ranges::sort(diff);

    int m = diff.size();
    
    for (int i = 0; i < m; i++) {
        if ((diff[i] - 1) / x <= k) {
            k -= (diff[i] - 1) / x;
            groups--;
        } else {
            break;
        }
    }

    std::println("{}", groups);
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input.txt", "r", stdin);
    freopen("/home/vikram/code/output.txt", "w", stdout);
#endif

    int tt = 1;
    // std::cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}