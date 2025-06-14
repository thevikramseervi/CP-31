#include <algorithm>
#include <iostream>
#include <vector>
#define int long long

bool good(std::vector<int>& a, int n, int h, int x) {
    for (int i = 0; i < n; i++) {
        x -= h - a[i];
        if (x < 0) return false;
    }
    return true;
}

void solve() {
    int n, x;
    std::cin >> n >> x;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int left = 1, right = 2e9 + 1;

    while (left + 1 < right) {
        int mid = left + (right - left) / 2;
        if (good(a, n, mid, x))
            left = mid;
        else
            right = mid;
    }

    std::cout << left << std::endl;
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

    while (tt--) {
        solve();
    }
}
