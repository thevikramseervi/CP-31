#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    int x = -1, y = -1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            x = i - 1;
            y = i;
            break;
        }
    }

    if (x == -1) {
        std::cout << "No\n";
        return;
    }

    std::cout << "Yes\n";
    std::cout << x + 1 << ' ' << y + 1 << '\n';
    for (int i = 0; i < n; i++) {
        if (i == x || i == y) continue;
        if (a[i] != a[x]) {
            std::cout << x + 1 << ' ' << i + 1 << '\n';
        } else {
            std::cout << y + 1 << ' ' << i + 1 << '\n';
        }
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
    std::cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}