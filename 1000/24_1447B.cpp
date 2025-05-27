#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    long long n, m;
    std::cin >> n >> m;

    long long sum = 0, negCnt = 0, zeroCnt = 0;
    long long smallestAbsoluteValue = 1e9;

    std::vector<std::vector<long long>> a(n, std::vector<long long>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> a[i][j];
            sum += std::abs(a[i][j]);
            smallestAbsoluteValue = std::min(std::abs(a[i][j]), smallestAbsoluteValue);
            if (a[i][j] == 0) zeroCnt++;
            else if (a[i][j] < 0) negCnt++;
        }
    }

    if (zeroCnt || negCnt % 2 == 0)
        std::cout << sum << '\n';
    else
        std::cout << sum - 2 * smallestAbsoluteValue << '\n';
}

signed main() {
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
