#include <iostream>
#define int long long
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
        cout << "First\n";
    } else if (b > a) {
        cout << "Second\n";
    } else {
        if (c % 2) {
            cout << "First\n";
        } else {
            cout << "Second\n";
        }
    }
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