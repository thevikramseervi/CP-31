#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, sum = 0;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (i != 0) sum += std::abs(a[i] - a[i - 1]);
    }

    if (sum == 0) {
        std::println("{}", 1);
        return;
    }

    std::vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n - 1; i++) {
        if (ans.back() == a[i] || a[i + 1] == a[i]) continue;
        if ((ans.back() > a[i] && a[i + 1] < a[i]) ||
            (ans.back() < a[i] && a[i + 1] > a[i])) {
            continue;
        }
        ans.push_back(a[i]);
    }
    ans.push_back(a[n - 1]);

    std::println("{} ", ans.size());
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
