#include <iostream>
#include <vector>

bool isZero(std::vector<int> &a, int n, int k) {
    for (int i = k; i < n; i++) {
        if (a[i] != 0) {
            return false;
        }
    }
    return true;
}

int firstZero(std::vector<int> &a, int n, int k) {
    for (int i = k; i < n; i++) {
        if (a[i] == 0) {
            return i;
        }
    }
    return -1;
}

void solve() {
    int n;
    std::cin >> n;

    bool isZeroArr = true;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i] != 0) {
            isZeroArr = false;
        }
    }

    // mex(S) = smallest non-neg int thats not in S
    // l <= r
    // w = mex({ al, al + 1, al + 2, ....., ar })
    // for all i from l to r, set ai = w;

    // answer is either 0, 1 or 2

    if (isZeroArr) {
        std::cout << 0 << '\n';
        return;
    }

    // if all the non zeroes values are consecutive
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            int fz = firstZero(a, n, i);
            if (fz == -1) {
                std::cout << 1 << '\n';
                return;
            }
            bool ans = isZero(a, n, fz);
            if (ans) {
                std::cout << 1 << '\n';
            } else {
                std::cout << 2 << '\n';
            }
            return;
        }
    }
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