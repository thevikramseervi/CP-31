#include <iostream>
#include <unordered_set>

void solve() {
  std::string s;
  std::cin >> s;

  int n = s.length();
  int k = std::unordered_set(s.begin(), s.end()).size();

  for (int i = 0; i < n; i++) {
    if (s[i] != s[i % k]) {
      std::cout << "No\n";
      return;
    }
  }

  std::cout << "Yes\n";
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
