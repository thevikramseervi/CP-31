#include <iostream>

void solve() {
    std::string s;
    std::cin >> s;

    int n = s.length();

    int zcnt = 0;
    int ocnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zcnt++;
        } else {
            ocnt++;
        }
    }

    if (ocnt == zcnt) {
        std::cout << 0 << '\n';
        return;
    }

    std::string t = "";

    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (ocnt == 0) {
                ans = i;
                break;
            }
            t += '1';
            ocnt--;
        } else {
            if (zcnt == 0) {
                ans = i;
                break;
            }
            t += '0';
            zcnt--;
        }
    }

    std::cout << n - ans << '\n';
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