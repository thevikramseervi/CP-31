#include <algorithm>
#include <iostream>

void solve() {
    int n, k;
    std::cin >> n >> k;

    int len = n - k;

    std::string s;
    std::cin >> s;

    if (len == 1) {
        std::cout << "Yes\n";
        return;
    }

    // i need to create a string of len n - k which is palindrome
    // i must have atleast two of each char except one

    sort(s.begin(), s.end());

    int cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        if (cnt == len / 2) {
            break;
        }
        if (s[i] == s[i + 1]) {
            cnt++;
            i++;
        }
    }

    if (cnt == len / 2) {
        std::cout << "Yes\n";
        return;
    }

    std::cout << "No\n";
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

    for (int i = 1; i <= tt; i++) {
        solve();
    }

    std::cout << '\n';
    return 0;
}