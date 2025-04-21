#include <bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) {
        std::cin >> x;
    }

    std::vector<int> b(n);
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && a[j] == a[i]) {
            j++;
        }
        if (j == i + 1) {
            std::cout << -1 << '\n';
            return;
        }
        for (int k = i; k < j; k++) {
            if (k == i) {
                b[k] = j - 1;
            } else {
                b[k] = k - 1;
            }
        }
        i = j;
    }

    for (int x : b) {
        std::cout << (x + 1) << " ";
    }

    std::cout << '\n';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int tt;
    std::cin >> tt;

    while (tt--) {
        solve();
    }
}
