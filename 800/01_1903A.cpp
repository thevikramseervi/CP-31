#include <bits/stdc++.h>

using namespace std;

int isArrSorted(vector<int>& a, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return 0;
        }
    }
    return 1;
}

void isArrReversible(vector<int>& a, int n, int k) {
    if (isArrSorted(a, n)) {
        cout << "YES\n";
        return;
    }
    if (k == 1) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        isArrReversible(a, n, k);
    }
    return 0;
}