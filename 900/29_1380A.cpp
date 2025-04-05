#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    // i need to find a no. such that there is a no less than itself on left
    // and a no. greater than itself on the right

    for (int j = 1; j < n - 1; j++) {
        int left = -1, right = -1;
        for (int i = 0; i < j; i++) {
            if (a[i] < a[j]) {
                left = i;
                break;
            }
        }
        if (left == -1) {
            continue;
        }
        for (int k = j + 1; k < n; k++) {
            if (a[k] < a[j]) {
                right = k;
                break;
            }
        }
        if (left != -1 && right != -1) {
            std::cout << "YES\n";
            std::cout << left + 1 << ' ' << j + 1 << ' ' << right + 1 << '\n';
            return;
        }
    }

    std::cout << "NO\n";
}

int main() {
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