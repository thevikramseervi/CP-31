#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i].first;
        a[i].second = i + 1;
    }

    for (int i = 0; i < n; i++) {
        std::cin >> b[i].first;
        b[i].second = i + 1;
    }

    for (int i = 0; i < n; i++) {
        std::cin >> c[i].first;
        c[i].second = i + 1;
    }

    std::sort(a.rbegin(), a.rend());
    std::sort(b.rbegin(), b.rend());
    std::sort(c.rbegin(), c.rend());

    int ans = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (a[i].second != b[j].second && a[i].second != c[k].second &&
                    b[j].second != c[k].second) {
                    ans = std::max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
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
