#include <iostream>
#include <string>

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    for (char i = 'a'; i <= 'z'; i++) {
        if (s.find(i) == s.npos) {
            std::cout << i << '\n';
            return;
        }
    }

    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            std::string t = std::string("") + i + j;
            if (s.find(t) == s.npos) {
                std::cout << t << '\n';
                return;
            }
        }
    }

    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            for (char k = 'a'; k <= 'z'; k++) {
                std::string t = std::string("") + i + j + k;
                if (s.find(t) == s.npos) {
                    std::cout << t << '\n';
                    return;
                }
            }
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
