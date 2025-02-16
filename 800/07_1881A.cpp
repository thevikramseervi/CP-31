#include <iostream>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    string x, s;
    cin >> x >> s;
 
    int i = 0;
    while (1) {
        if (x.find(s) != string::npos) {
            cout << i << '\n';
            return;
        } else if (x.length() > 6 * s.length()) {
            cout << -1 << "\n";
            return;
        }
        x += x;
        i++;
    }
}
 
int main() {
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