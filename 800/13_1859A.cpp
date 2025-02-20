#include <algorithm>
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

    sort(a.rbegin(), a.rend());

    int lb = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[0]) {
            lb++;
        } else {
            break;
        }
    }
    if (lb == n) {
        cout << -1 << '\n';
        return;
    }

    cout << n - lb << " " << lb << "\n";

    for (int i = lb; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';

    for (int i = 0; i < lb; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    
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