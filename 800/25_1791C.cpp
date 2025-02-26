#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int l = 0, r = n - 1;

    while (l < r) {
        if (s[l] == s[r]) {
            std::cout << r - l + 1 << '\n';
            return;
        } else {
            l++;
            r--;
        }
    }

    if (l == r) {
        std::cout << 1 << '\n';
    }

    if (l > r) {
        std::cout << 0 << '\n';
    }
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