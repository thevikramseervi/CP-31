#include <iostream>
#include <vector>
#define int long long
using namespace std;

int min(int a, int b, int c, int d) {
    if (a < b && a < c && a < d) {
        return a;
    } else if (b < c && b < d) {
        return b;
    } else if (c < d) {
        return c;
    }
    return d;
}

void solve() {
    int n = 10, sum = 0;

    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'X') {
                sum += min(i, j, n - i - 1, n - j - 1) + 1;
            }
        }
    }

    cout << sum << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    cin >> tt;

    while (tt--) {
        solve();
    }

    cout << '\n';
    return 0;
}