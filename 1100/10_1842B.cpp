#include <bitset>
#include <iostream>
#include <vector>

bool f(int new_knowledge, int x) {
    std::string cur = std::bitset<32>(new_knowledge).to_string();
    std::string req = std::bitset<32>(x).to_string();
    for (int i = 31; i >= 0; i--) {
        if (req[i] == '0' && cur[i] == '1') {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, x;
    std::cin >> n >> x;

    std::vector<int> a(n), b(n), c(n);
    for (int& i : a) std::cin >> i;
    for (int& i : b) std::cin >> i;
    for (int& i : c) std::cin >> i;

    if (x == 0) {
        std::cout << "Yes\n";
        return;
    }

    int i = 0, j = 0, k = 0;
    int knowledge = 0;

    while (knowledge != x) {
        if (i < n && f(knowledge | a[i], x)) {
            knowledge = knowledge | a[i++];
        } else if (j < n && f(knowledge | b[j], x)) {
            knowledge = knowledge | b[j++];
        } else if (k < n && f(knowledge | c[k], x)) {
            knowledge = knowledge | c[k++];
        } else {
            std::cout << "No\n";
            return;
        }
    }

    std::cout << "Yes\n";
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
