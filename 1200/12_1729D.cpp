#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n), v(n);
    for (int i = 0; i < n; i++) std::cin >> a[i];
    for (int i = 0; i < n; i++) std::cin >> b[i];
    for (int i = 0; i < n; i++) v[i] = b[i] - a[i];

    std::sort(v.rbegin(), v.rend());

    int left = 0, right = n - 1, ans = 0;
    while (left < right) {
        if (v[left] - std::abs(v[right]) >= 0)
            left++, right--, ans++;
        else
            right--;
    }

    std::println("{} ", ans);
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
