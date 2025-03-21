#include <iostream>
#include <map>

void solve() {
    int n;
    std::cin >> n;

    std::map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        m[x]++;
    }

    int max = 0;
    for (auto it : m) {
        if (it.second > max) {
            max = it.second;
        }
    }

    if (max == n) {
        std::cout << 0 << '\n';
        return;
    }

    int cnt = 0;

    while (max < n) {
        cnt++;
        int u = std::min(max, n - max);
        cnt += u;
        max += u;
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