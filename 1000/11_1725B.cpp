#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n, d;
    std::cin >> n >> d;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    std::sort(a.rbegin(), a.rend());

    int k = 1;
    int cnt = n;
    int nteams = 0;

    // how many teams i can form whose power is greater than d;
    for (int i = 0; i < n && cnt > 0; i++) {
        if (a[i] * k > d) {
            if (cnt < k) {
                break;
            }
            cnt -= k;
            nteams++;
        } else {
            k++;
            i--;
        }
    }

    std::cout << nteams << '\n';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    // std::cin >> tt;

    while (tt--) {
        solve();
    }

    std::cout << '\n';
    return 0;
}
