#include <iostream>
#include <vector>

void solve() {
    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n);
    std::vector<int> prefix(n + 1);
    prefix[0] = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        prefix[i + 1] = prefix[i] + a[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r, k;
        std::cin >> l >> r >> k;

        int sum = (r - l + 1) * k;

        sum += prefix[l - 1];
        sum += prefix[n] - prefix[r];

        if (sum % 2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
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