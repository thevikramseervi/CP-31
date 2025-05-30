#include <iostream>
#include <vector>
#define int long long

const int max = 1e5;
std::vector<bool> primes(max, true);

void calcPrime() {
    primes[0] = false;
    primes[1] = false;
    for (int i = 2; i < max; i++) {
        if (primes[i]) {
            for (int j = 2 * i; j < max; j += i) {
                primes[j] = false;
            }
        }
    }
}

void solve() {
    int d;
    std::cin >> d;

    int i = 0, j = 0;

    for (i = d + 1; i < max; i++) {
        if (primes[i]) {
            break;
        }
    }
    for (j = d + i; j < max; j++) {
        if (primes[j]) {
            break;
        }
    }

    std::cout << i * j << '\n';
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    calcPrime();

    while (tt--) {
        solve();
    }

    std::cout << '\n';
    return 0;
}
