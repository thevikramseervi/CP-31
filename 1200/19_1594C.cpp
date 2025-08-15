#include <iostream>
#include <print>
#include <set>
#define int long long

int idk(std::set<int>& set, int n) {
    // if there exist a number x between [2, n]
    // such that no element in the set is divisible by x

    for (int i = 2; i <= n; i++) {
        if (set.count(i) != 0) continue;
        int j;
        for (j = i + i; j <= n; j = j + i) {
            if (set.count(j) != 0) break;
        }
        if (j > n) return i;
    }
    return -1;
}

void solve() {
    int n;
    char c;
    std::string s;
    std::cin >> n >> c >> s;

    std::set<int> set;
    for (int i = 0; i < n; i++) {
        if (s[i] != c) set.insert(i + 1);
    }

    if (set.size() == 0) {
        std::println("0");
        return;
    }

    if (s[n - 1] == c) {
        std::println("1");
        std::println("{}", n);
        return;
    }

    int x = idk(set, n);
    if (x != -1) {
        std::println("1");
        std::println("{}", x);
        return;
    }

    std::println("2");
    std::println("{} {}", n - 1, n);
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