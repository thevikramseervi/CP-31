#include <iostream>
#include <numeric>
#include <print>
#include <vector>
#define int long long

bool f(int x, std::vector<int>& prefix, int n, int s) {
    // can i get a sum of s by removing exactly x elements
    for (int i = 0; i <= x; i++) {
        if (s == prefix[n - x + i] - prefix[i]) {
            return true;
        }
    }
    return false;
}

void solve() {
    int n, s;
    std::cin >> n >> s;

    std::vector<int> a(n);
    for (int& x : a) std::cin >> x;

    int sum = std::accumulate(a.begin(), a.end(), 0LL);

    if (sum < s) {
        std::println("-1");
        return;
    }
    if (sum == s) {
        std::println("0");
        return;
    }

    std::vector<int> prefix(n + 1);
    prefix[0] = 0;
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + a[i];
    }

    int left = 0, right = 0, cnt = 0;
    for (int i = 0; i < n && cnt < sum - s; i++) {
        if (a[i] == 1) {
            cnt++;
            right = i + 1;
        }
    }

    while (left + 1 < right) {
        int mid = left + ((right - left) >> 1);
        if (f(mid, prefix, n, s)) {
            right = mid;
        } else {
            left = mid;
        }
    }

    std::println("{}", right);
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
