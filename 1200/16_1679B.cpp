#include <iostream>
#include <numeric>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    int sum = std::accumulate(a.begin(), a.end(), 0LL);

    std::vector<int> t(n, -1);

    int tim = -2, b = 0;
    for (int i = 0; i < q; i++) {
        int tp;
        std::cin >> tp;

        if (tp == 1) {
            int j, x;
            std::cin >> j >> x;
            j--;
            if (t[j] < tim) {
                sum -= b;
            } else {
                sum -= a[j];
            }
            sum += x;
            a[j] = x;
            t[j] = i;
        } else {
            int x;
            std::cin >> x;

            tim = i;
            b = x;
            sum = n * x;
        }

        std::println("{}", sum);
    }
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
