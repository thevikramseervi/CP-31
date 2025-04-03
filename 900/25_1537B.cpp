#include <iostream>
#define int long long

int max(int a, int b, int c, int d) {
    if (a > b && a > c && a > d) {
        return a;
    }
    if (b > c && b > d) {
        return b;
    }
    if (c > d) {
        return c;
    }
    return d;
}

void solve() {
    int n, m, i, j;
    std::cin >> n >> m >> i >> j;

    // dist from top-left
    int tld = (i - 1) + (j - 1);

    // dist from top-right
    int trd = (i - 1) + (m - j);

    // dist from bottom-left
    int bld = (n - i) + (j - 1);

    // dist from bottom-right
    int brd = (n - i) + (m - j);

    int mx = max(tld, trd, bld, brd);

    int x1, y1, x2, y2;

    if (mx == tld) {
        x1 = 1;
        y1 = 1;
    } else if (mx == trd) {
        x1 = 1;
        y1 = m;
    } else if (mx == bld) {
        x1 = n;
        y1 = 1;
    } else {
        x1 = n;
        y1 = m;
    }

    if (x1 == 1) {
        x2 = n;
    } else {
        x2 = 1;
    }

    if (y1 == 1) {
        y2 = m;
    } else {
        y2 = 1;
    }
    
    std::cout << x1 << " " << y1 << ' ' << x2 << ' ' << y2 << '\n';
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