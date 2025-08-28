#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    std::vector<long long> maxSetBit(31, 0);
    for (int i = 0; i < n; i++) {
        for (int bit = 30; bit >= 0; bit--) {
            if ((a[i] & (1 << bit))) {
                maxSetBit[bit]++;
                break;
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i < 31; i++) {
        ans += (maxSetBit[i] * (maxSetBit[i] - 1)) / 2;
    }
    std::cout << ans << '\n';
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