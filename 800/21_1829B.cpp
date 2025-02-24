#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int ans = 1 - a[0];
    int max = ans;
    for (int i = 1; i < n; i++) {
        if (a[i] == 0 && a[i - 1] == 0) {
            ans++;
        } else if (a[i] == 0) {
            ans = 1;
        } else {
            ans = 0;
        }
        max = std::max(ans, max);
    }

    std::cout << max << "\n";
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