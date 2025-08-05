#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> a(m), diff(m);
    for (int& x : a) std::cin >> x;

    std::sort(a.rbegin(), a.rend());

    diff[0] = n - a[0] + a[m - 1] - 1;
    for (int i = 1; i < m; i++) {
        diff[i] = a[i - 1] - a[i] - 1;
    }

    std::sort(diff.rbegin(), diff.rend());

    int sum = 0;
    for (int i = 0; i < m; i++) {
        int x = diff[i] - (4 * i + 1);
        if (x < 0) break;
        if (x == 0) {
            sum++;
            break;
        }

        sum += x;
    }

    std::println("{}", n - sum);
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
