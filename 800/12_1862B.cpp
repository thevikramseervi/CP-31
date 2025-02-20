#include <iostream>
#include <vector>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; i++) {
        if (b[i - 1] <= b[i]) {
            a.push_back(b[i]);
        } else {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    int m = a.size();
    cout << m << "\n";

    for (int x : a) {
        cout << x << " ";
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