#include <iostream>
#include <set>
#include <vector>

void solve() {
  int n, k;
  std::cin >> n >> k;

  std::vector<int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  std::set<int> s(a.begin(), a.end());

  for (int &x : a) {
    if (s.count(x + k)) {
      std::cout << "Yes\n";
      return;
    }
  }

  std::cout << "No\n";
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
