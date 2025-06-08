#include <algorithm>
#include <iostream>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i].first;
        a[i].second = i;
    }

    std::sort(a.begin(), a.end());
    std::vector<std::pair<int, int>> cnt(n);

    int j = 0, sum = 0, score = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].first;
        cnt[i].first = a[i].second;
        score = std::max(sum, score);

        for (j = std::max(i + 1, j); j < n; j++) {
            if (score >= a[j].first)
                score += a[j].first;
            else
                break;
        }

        if (j == n)
            cnt[i].second = n - 1;
        else
            cnt[i].second = j - 1;
    }

    std::sort(cnt.begin(), cnt.end());

    for (auto& x : cnt) {
        std::cout << x.second << ' ';
    }
    std::cout << '\n';
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
