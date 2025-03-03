#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    int ans = 0;
    int inc = 1;
    int cnt = 0;

    while (ans < n) {
        for (int i = 1; i < 10 && ans < n; i++) {
            ans += inc;
            cnt++;
        }
        inc *= 10;
    }

    std::cout << cnt << '\n';
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