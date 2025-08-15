#include <iostream>
#include <print>
#define int long long

int idk(int n, std::string& s, char c) {
    int i = 0, j = n - 1;
    int ans = 0;
    while (i < j) {
        if (s[i] == s[j]) {
            i++, j--;
        } else {
            if (s[i] == c) {
                i++;
                ans++;
            } else if (s[j] == c) {
                j--;
                ans++;
            } else {
                return -1;
            }
        }
    }
    return ans;
}

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] != s[n - 1 - i]) {
            int x = idk(n, s, s[i]);
            int y = idk(n, s, s[n - 1 - i]);

            if (x == -1 && y == -1) {
                std::println("-1");
            } else if (x == -1) {
                std::println("{}", y);
            } else if (y == -1) {
                std::println("{}", x);
            } else {
                std::println("{}", std::min(x, y));
            }
            return;
        }
    }

    std::println("0");
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