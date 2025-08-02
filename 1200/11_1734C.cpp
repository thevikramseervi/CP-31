#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::vector<bool> a(n + 1);
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            a[i + 1] = true;
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == false) continue;

        for (int j = 1; i * j - 1 < n; j++) {
            if (s[i * j - 1] == '0') {
                ans += i;
                s[i * j - 1] = 'x';
            } else if (s[i * j - 1] == 'x') {
                continue;
            } else {
                break;
            }
        }
    }

    std::println("{}", ans);
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
