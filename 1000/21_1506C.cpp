#include <iostream>

void solve() {
    std::string a, b;
    std::cin >> a >> b;

    // remove first / last char in a
    // remove first / last char in b

    int ans = 0;
    int n = a.length();
    int m = b.length();

    // find longest common substring
    for (int i = 0; i < n; i++) {
        if (b.find(a[i]) == b.npos) continue;
        std::string s = std::string(1, a[i]);
        int res = 1;

        for (int j = i + 1; j < n; j++) {
            s += std::string(1, a[j]);
            if (b.find(s) == b.npos) break;
            res = std::max(res, j - i + 1);
        }

        ans = std::max(ans, res);
    }

    int final_ans = n + m - 2 * ans;

    std::cout << final_ans << '\n';
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

    std::cout << '\n';
    return 0;
}
