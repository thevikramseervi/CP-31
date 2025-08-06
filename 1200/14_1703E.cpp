#include <iostream>
#include <print>
#include <vector>
#define int long long

void solve() {
    int n, ans = 0;
    std::cin >> n;

    std::vector<std::string> a(n);
    for (std::string& x : a) std::cin >> x;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n - 1 - i; j++) {
            int zero_cnt = 0, one_cnt = 0;

            if (a[i][j] == '0')
                zero_cnt++;
            else
                one_cnt++;

            if (a[j][n - 1 - i] == '0')
                zero_cnt++;
            else
                one_cnt++;

            if (a[n - 1 - i][n - 1 - j] == '0')
                zero_cnt++;
            else
                one_cnt++;

            if (a[n - 1 - j][i] == '0')
                zero_cnt++;
            else
                one_cnt++;

            int min = std::min(zero_cnt, one_cnt);
            ans += min;
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
