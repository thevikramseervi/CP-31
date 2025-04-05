#include <iostream>

void solve() {
    std::string s;
    std::cin >> s;

    int n = s.length();
    int zerocnt = 0, onecnt = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            zerocnt++;
        } else {
            onecnt++;
        }
    }

    int noOfPairs = std::min(zerocnt, onecnt);
    
    if (noOfPairs % 2 == 0) {
        std::cout << "NET\n";
    } else {
        std::cout << "DA\n";
    }
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