#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    int l = 0, r = n - 1;
    int min = 1, max = n;

    while (l <= r) {
        if (a[l] == min)
            l++, min++;
        else if (a[l] == max)
            l++, max--;
        else if (a[r] == min)
            r--, min++;
        else if (a[r] == max)
            r--, max--;
        else
            break;
    }

    if (l <= r)
        std::println("{} {}", l + 1, r + 1);
    else
        std::println("-1");
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
