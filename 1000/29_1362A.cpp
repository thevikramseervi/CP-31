#include <iostream>
#define int long long

bool solve() {
    int a, b, cnt = 0;
    std::cin >> a >> b;

    if (a > b)
        while (a > b && !(a & 1) && ++cnt) a = a >> 1;
    else
        while (a < b && ++cnt) a = a << 1;

    if (a != b) return false;

    int ans = 0;
    while (cnt >= 3 && ++ans) cnt -= 3;
    while (cnt >= 2 && ++ans) cnt -= 2;
    while (cnt > 0 && ++ans) cnt -= 1;
    std::cout << ans << std::endl;
    return true;
}

signed main() {
    int tt = 1;
    std::cin >> tt;

    while (tt--)
        if (!solve()) std::cout << -1 << std::endl;
}
