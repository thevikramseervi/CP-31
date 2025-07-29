#include <algorithm>
#include <iostream>
#include <map>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, ans = 0;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    std::ranges::sort(a);

    std::map<int, int> map;
    for (int i = 0; i < n; i++) {
        if (map[a[i]] == 0) {
            map[a[i]] = i + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) continue;

        int next = a[i] + 1;
        a[i] = 0;
        ans++;
        if (i == n - 1) break;

        if (a[i + 1] == a[i])
            map[a[i]]++;
        else
            map[a[i]] = 0;

        while (map[next] != 0) {
            a[map[next] - 1] = 0;
            if (map[next] < n && a[map[next]] == next)
                map[next]++;
            else
                map[next] = 0;

            next++;
        }
    }

    std::println("{}", ans);
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
