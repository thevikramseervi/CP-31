#include <iostream>
#include <vector>

bool isStrictlyIncreasing(std::vector<int> &a, int n) {
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] >= a[i + 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    if (isStrictlyIncreasing(a, n)) {
        std::cout << 0 << '\n';
        return;
    }

    int cnt = 0;
    for (int i = n - 2; i >= 0; i--) {
        while (a[i] >= a[i + 1] && a[i] != 0) {
            a[i] /= 2;
            cnt++;
        }
    }

    if (!isStrictlyIncreasing(a, n)) {
        cnt = -1;
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