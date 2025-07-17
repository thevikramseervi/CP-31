#include <iostream>
#include <vector>

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n), t(q);
    std::vector<int> first_pos(51);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (first_pos[a[i]] == 0) {
            first_pos[a[i]] = i + 1;
        }
    }

    for (int i = 0; i < q; i++) {
        int x;
        std::cin >> x;

        std::cout << first_pos[x] << ' ';

        for (int i = 1; i <= 50; i++) {
            if (first_pos[i] < first_pos[x]) {
                first_pos[i]++;
            }
        }

        first_pos[x] = 1;
    }
    std::cout << '\n';
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
