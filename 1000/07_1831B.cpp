#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    int cnt = 1;
    std::set<int> set;
    std::map<int, int> amap;
    std::map<int, int> bmap;
    std::vector<int> a(n);
    std::vector<int> b(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        set.insert(a[i]);
        if (i == 0) {
            amap[a[i]] = 1;
            continue;
        }
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            amap[a[i - 1]] = std::max(amap[a[i - 1]], cnt);
            cnt = 1;
        }
    }
    amap[a[n - 1]] = std::max(amap[a[n - 1]], cnt);

    cnt = 1;
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
        set.insert(b[i]);
        if (i == 0) {
            bmap[b[i]] = 1;
            continue;
        }
        if (b[i] == b[i - 1]) {
            cnt++;
        } else {
            bmap[b[i - 1]] = std::max(bmap[b[i - 1]], cnt);
            cnt = 1;
        }
    }
    bmap[b[n - 1]] = std::max(bmap[b[n - 1]], cnt);

    int ans = 1;
    for (int x : set) {
        ans = std::max(ans, amap[x] + bmap[x]);
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
