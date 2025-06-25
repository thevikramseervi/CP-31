#include <algorithm>
#include <chrono>
#include <iostream>
#include <vector>
#define int long long
const int MOD = 1e9 + 7;

int bs(int x, std::vector<int>& a, int n) {
    int left = -1, right = n;

    while (left + 1 < right) {
        int mid = left + (right - left) / 2;
        if (a[mid] > x) {
            left = mid;
        } else {
            right = mid;
        }
    }
    return left + 1;
}

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n), b(n);
    for (int& x : a) std::cin >> x;
    for (int& x : b) std::cin >> x;

    std::sort(a.rbegin(), a.rend());
    std::sort(b.rbegin(), b.rend());

    // for each value x in b find the no of values in a that are > x;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int cnt = bs(b[i], a, n);
        if (cnt == 0) {
            ans = 0;
            break;
        }
        ans = (ans * (cnt - i)) % MOD;
    }

    std::cout << ans << '\n';
}

signed main() {
    auto begin = std::chrono::high_resolution_clock::now();
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input.txt", "r", stdin);
    freopen("/home/vikram/code/output.txt", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) solve();

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> seconds = end - begin;
    std::cerr << "Time measured: " << seconds.count() << " seconds.\n";
}
