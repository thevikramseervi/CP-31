#include <iostream>

int findLastOccurrence(char c, std::string& s) {
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == c) {
            s[i] = '0';
            return i;
        }
    }
    return -1;
}

void solve() {
    std::string s, t, p = "";
    std::cin >> s >> t;

    for (char x : s) {
        p += x;
    }

    int len = t.length();
    int prev = findLastOccurrence(t[len - 1], s);
    if (prev == -1) {
        std::cout << "NO\n";
        return;
    }

    for (int i = len - 2; i >= 0; i--) {
        int j = findLastOccurrence(t[i], s);
        // std::cout << j << "  " << prev << '\n';
        if (j == -1 || j > prev) {
            std::cout << "NO\n";
            return;
        }
        prev = j;
    }

    std::cout << "YES" << '\n';
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