#include <algorithm>
#include <iostream>
#include <unordered_set>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::unordered_set<int> set1;
    std::unordered_set<int> set2;

    std::vector<int> a;
    std::vector<int> b;

    for (int i = 0; i < n - 1; i++) {
        set1.insert(s[i]);
        set2.insert(s[n - 1 - i]);

        a.push_back(set1.size());
        b.push_back(set2.size());
    }

    std::reverse(b.begin(), b.end());

    int max = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] + b[i] > max) {
            max = a[i] + b[i];
        }
    }

    std::cout << max << '\n';
}

int main() {
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