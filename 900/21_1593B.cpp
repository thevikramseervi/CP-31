#include <iostream>

void solve() {
    std::string s;
    std::cin >> s;

    int len = s.length();
    int ans = len;

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            bool works = false;
            if (s[j] == '5' && (s[i] == '2' || s[i] == '7')) {
                works = true;
            }
            if (s[j] == '0' && s[i] == '5') {
                works = true;
            }
            if (s[j] == '0' && s[i] == '0' && i > 0) {
                works = true;
            }
            if (works) {
                ans = std::min(ans, len - 2 - i);
            }
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