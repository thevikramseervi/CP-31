#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    int _2cnt = 0;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] == 2) {
            _2cnt++;
        }
    }

    if (_2cnt == 0) {
        std::cout << 1 << '\n';
        return;
    }

    if (_2cnt % 2) {
        std::cout << -1 << '\n';
        return;
    }

    int ans = -1;
    int printed2 = 0;
    for (int i = 0; i < n; i++) {
        if (printed2 == _2cnt / 2) {
            ans = i;
            break;
        }
        if (a[i] == 2) {
            printed2++;
        }
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