#include <iostream>

void solve() {
    int n;
    std::cin >> n;

    long long cnt = 0;
    bool found = true;

    while (n > 1) {
        if (n % 3 != 0) {
            found = false;
            break;
        }
        if (n % 6 == 0) {
            n /= 6;
        } else {
            n *= 2;
        }
        cnt++;
    }

    if (found) {
        std::cout << cnt << '\n';
    } else {
        std::cout << -1 << "\n";
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