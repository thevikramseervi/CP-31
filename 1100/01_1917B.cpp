#include <iostream>
#include <set>

int main() {
    int tt;
    std::cin >> tt;

    while (tt--) {
        int n, ans = 0;
        std::cin >> n;

        std::string str;
        std::cin >> str;

        std::set<int> set;
        for (char c : str) {
            set.insert(c);
            ans += set.size();
        }

        std::cout << ans << '\n';
    }
}