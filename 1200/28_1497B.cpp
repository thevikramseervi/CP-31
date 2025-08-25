#include <iostream>
#include <map>
using ll = long long;

void solve() {
    ll n, m;
    std::cin >> n >> m;
    std::map<ll, ll> mp;
    while (n--) {
        ll it;
        std::cin >> it;
        mp[it % m]++;
    }
    ll ans = 0;
    for (auto &[f, s] : mp) {
        if (f == 0)
            ans++;
        else if (2 * f == m)
            ans++;
        else if (2 * f < m || mp.find(m - f) == mp.end()) {
            ll x = s, y = mp[m - f];
            ans += 1 + std::max(0ll, std::abs(x - y) - 1);
        }
    }
    std::cout << ans << '\n';
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
