#include <iostream>
#include <map>
#include <vector>
#define int long long

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i] -= i;
    }

    // j < i and ai - aj = i - j;
    std::map<int, int> freq;
    for (int& x : a) freq[x]++;

    int ans = 0;
    for (auto& [value, count] : freq) {
        ans += ((count) * (count - 1)) / 2;
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