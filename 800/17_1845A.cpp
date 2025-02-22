#include <iostream>
#include <vector>
using namespace std;

int fn(int n, int k, int x, vector<int>& dp) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    for (int i = 1; i <= k; i++) {
        if (i != x) {
            int ans = fn(n - i, k, x, dp);
            if (ans) {
                dp.push_back(i);
                return ans;
            }
        }
    }
    return 0;
}

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> dp;

    // i need to find the numbers that can form a sum of n
    // using 1....k except x

    if (x != 1) {
        cout << "Yes" << endl;
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << endl;
        return;
    }

    int ans = fn(n, k, x, dp);

    if (ans) {
        cout << "Yes" << endl;
        cout << dp.size() << endl;
        for (int x : dp) {
            cout << x << ' ';
        }
        cout << '\n';
    } else {
        cout << "No" << endl;
    }
}

signed main() {
    cout.tie(nullptr);

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