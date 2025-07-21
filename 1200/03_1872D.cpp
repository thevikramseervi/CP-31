#include <iostream>
#include <numeric>
#define int long long

void solve() {
    int n, x, y;
    std::cin >> n >> x >> y;

    // no of values divisible by x
    int nx = n / x;

    // no of values divisible by y
    int ny = n / y;

    // no of values divisible by both x and y
    int nxy = n / std::lcm(x, y);

    // std::cout << nx << ' ' << ny << ' ' << nxy << '\n';

    nx -= nxy;  // no of values only divisible by x and not by y
    ny -= nxy;  // no of values only divisible by y and not by x
    // std::cout << nx << ' ' << ny << '\n';

    int sum2 = (ny * (ny + 1)) / 2;

    // sum1 = n + (n-1) + (n-2) + ..... + (n - nx + 1)

    int nnx = n - nx;
    int sum1 = (n * (n + 1)) / 2 - (nnx * (nnx + 1)) / 2;

    std::cout << sum1 - sum2 << '\n';
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input.txt", "r", stdin);
    freopen("/home/vikram/code/output.txt", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) {
        solve();
    }

    return 0;
}
