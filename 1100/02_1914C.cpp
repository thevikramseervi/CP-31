#include <iostream>
#include <vector>

int main() {
    int tt;
    std::cin >> tt;

    while (tt--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<long long> a(n), b(n);
        for (long long& x : a) std::cin >> x;
        for (long long& x : b) std::cin >> x;

        long long sum = 0, maxi = 0, ans = 0;
        for (int i = 0; i < std::min(n, k); i++) {
            sum += a[i];
            maxi = std::max(b[i], maxi);
            ans = std::max(ans, sum + (k - i - 1) * maxi);
        }

        std::cout << ans << '\n';
    }
}