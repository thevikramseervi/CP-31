#include <iostream>
#include <vector>
#define int long long

bool f(int x, int n, int c, std::vector<int>& s) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ((s[i] + x) * (s[i] + x));
        if (sum > c) return false;
    }
    return true;
}

void solve() {
    int n, c;
    std::cin >> n >> c;

    std::vector<int> s(n);
    for (int& x : s) std::cin >> x;

    int l = 1, r = 1e9;
    while (l + 1 < r) {
        int mid = l + (r - l) / 2;
        if (f(mid, n, c, s)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    std::cout << l / 2 << '\n';
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) solve();
}
