#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int ans = k;
    for (int i = 0; i < n; i++) {
        ans = std::min(ans, (k - a[i] % k) % k);
    }

    if (k == 4) {
        int even = std::count_if(a.begin(), a.end(),
                                 [&](int x) { return x % 2 == 0; });
        ans = std::min(ans, std::max(0, 2 - even));
    }

    std::cout << ans << '\n';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) {
        solve();
    }

    std::cout << '\n';
    return 0;
}