#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n, k, q;
    std::cin >> n >> k >> q;

    std::vector<int> a(n, false);
    std::vector<bool> go(n);
    std::vector<int> v;

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] <= q) {
            go[i] = true;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (go[i] == false) {
            if (cnt != 0 && cnt >= k) {
                v.push_back(cnt);
            }
            cnt = 0;
        } else {
            cnt++;
            if (i == n - 1 && cnt >= k) {
                v.push_back(cnt);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        int x = (0 > v[i] - k + 1) ? 0 : v[i] - k + 1;
        ans += (x * (x + 1)) / 2;
    }

    std::cout << ans << '\n';
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

    return 0;
}
