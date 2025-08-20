#include <algorithm>
#include <iostream>
#include <print>

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int zero_cnt = std::count(s.begin(), s.end(), '0');

    if (zero_cnt == 1) {
        std::println("BOB");
        return;
    }

    if (zero_cnt & 1)
        std::println("ALICE");
    else
        std::println("BOB");
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