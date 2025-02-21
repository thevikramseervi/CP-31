#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // find min difference;
    int min_diff = LONG_LONG_MAX;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] < min_diff) {
            min_diff = a[i] - a[i - 1];
        }
    }

    // if min_diff < 0 -ve values then the array is already in unsorted
    if (min_diff < 0) {
        cout << 0 << "\n";
        return;
    }

    int res = ceil((min_diff + 1) / 2.0);

    cout << res << '\n';
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