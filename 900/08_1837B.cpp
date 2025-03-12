#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int ans = 1;
    int cur = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            cur = 1;
        } else {
            cur++;
        }
        ans = std::max(ans, cur);
    }

    std::cout << ans + 1 << '\n';
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