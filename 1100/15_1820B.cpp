#include <chrono>
#include <iostream>
#include <print>
#define int long long

void solve() {
    std::string s;
    std::cin >> s;

    int len = s.length();

    if (len == 1) {
        std::println("{}", s);
        return;
    }

    int first_zero_index = -1;
    for (int i = 0; i < len; i++) {
        if (s[i] == '0') {
            first_zero_index = i;
            break;
        }
    }

    int last_zero_index = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '0') {
            last_zero_index = i;
            break;
        }
    }

    if (first_zero_index == -1) {
        std::println("{}", len * len);
        return;
    }

    int no_first_ones = first_zero_index;
    int no_last_ones = len - 1 - last_zero_index;

    int cnt = 0, best = no_first_ones + no_last_ones;

    for (int i = 0; i < len; i++) {
        if (s[i] == '1') {
            cnt++;
        } else {
            best = std::max(best, cnt);
            cnt = 0;
        }
    }

    best = std::max(cnt, best);

    if (best % 2 == 1) {
        int ans = best / 2 + 1;
        std::println("{}", ans * ans);
    } else {
        int floor = best / 2;
        int ceil = floor + 1;
        std::println("{}", floor * ceil);
    }
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
