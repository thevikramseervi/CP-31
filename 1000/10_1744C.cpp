#include <iostream>

void solve() {
    int n;
    char c;
    std::cin >> n >> c;

    std::string s;
    std::cin >> s;

    if (c == 'g') {
        std::cout << 0 << '\n';
        return;
    }

    int l = -1;
    int ans = -1;
    int firstGreenIndex = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == c && l == -1) {
            l = i;
        } else if (s[i] == 'g') {
            if (l != -1) {
                ans = std::max(ans, i - l);
                l = -1;
            }
            if (firstGreenIndex == -1) {
                firstGreenIndex = i;
            }
        }
    }

    if (l != -1) {
        ans = std::max(n - l + firstGreenIndex, ans);
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
