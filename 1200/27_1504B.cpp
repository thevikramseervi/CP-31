#include <iostream>
#include <print>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::string a, b;
    std::cin >> a >> b;

    int azero = 0, bzero = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '0') azero++;
        if (b[i] == '0') bzero++;
    }

    if (azero != bzero) {
        std::println("No");
        return;
    }

    std::vector<int> prefix_zero(n + 1), prefix_one(n + 1);
    prefix_zero[0] = 0, prefix_one[0] = 0;
    for (int i = 1; i <= n; i++) {
        prefix_zero[i] = prefix_zero[i - 1] + (a[i - 1] == '0' ? 1 : 0);
        prefix_one[i] = prefix_one[i - 1] + (a[i - 1] == '1' ? 1 : 0);
    }

    int changed = false;

    for (int i = n - 1; i >= 0; i--) {
        if (changed && a[i] != b[i]) continue;
        if (!changed && a[i] == b[i]) continue;

        if (prefix_one[i + 1] != prefix_zero[i + 1]) {
            std::println("No");
            return;
        }

        changed = !changed;
    }
    std::println("Yes");
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
