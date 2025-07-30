#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n), k(q);
    for (int& x : a) std::cin >> x;
    for (int& x : k) std::cin >> x;

    std::vector<int> prefix(n + 1), max(n + 1);
    max[0] = 0;
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i - 1];
        max[i] = std::max(max[i - 1], a[i - 1]);
    }

    for (int i = 0; i < q; i++) {
        // in the max array find the floor index of k[i]
        int left = 0, right = n + 1;
        while (left + 1 < right) {
            int mid = left + ((right - left) >> 1);
            if (max[mid] <= k[i])
                left = mid;
            else
                right = mid;
        }
        std::print("{} ", prefix[left]);
    }
    std::println();
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
