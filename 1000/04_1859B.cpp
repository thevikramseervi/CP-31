#include <algorithm>
#include <iostream>
#include <vector>

#define int unsigned long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> smallestOfEachArray(n);
    std::vector<int> secondSmallestOfEachArray(n);

    int smallestOfAllArrays = 1e9;
    int secondSmallestOfAllArrays = 1e9;

    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;

        std::vector<int> a(m);
        for (int j = 0; j < m; j++) {
            std::cin >> a[j];
        }

        std::sort(a.begin(), a.end());
        smallestOfEachArray[i] = *a.begin();
        secondSmallestOfEachArray[i] = *(a.begin() + 1);

        if (*a.begin() < smallestOfAllArrays) {
            smallestOfAllArrays = *a.begin();
        }

        if (*(a.begin() + 1) < secondSmallestOfAllArrays) {
            secondSmallestOfAllArrays = *(a.begin() + 1);
        }
    }

    int ans = smallestOfAllArrays;

    for (int x : secondSmallestOfEachArray) {
        ans += x;
    }

    ans = ans - secondSmallestOfAllArrays;

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
