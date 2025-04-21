#include <iostream>
#include <vector>

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::string s;
    std::cin >> s;

    std::vector<int> prefix_b;
    prefix_b.push_back(0);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            cnt++;
        }
        prefix_b.push_back(cnt);
    }

    // for (int x : prefix_b) {
    //     std::cout << x << ' ';
    // }
    // std::cout << '\n';

    if (n == k) {
        std::cout << n - cnt << '\n';
        return;
    }

    int min = k;
    for (int i = 0; i <= n - k; i++) {
        int diff = k - (prefix_b[i + k] - prefix_b[i]);
        min = std::min(diff, min);
    }

    std::cout << min;
    std::cout << '\n';
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
