#include <iostream>
#include <numeric>
#include <vector>

std::vector<int> pairs[1001];

void solve() {
  int n, x;
  std::cin >> n;

  std::vector<int> id(1001);
  for (int i = 1; i <= n; i++) {
    std::cin >> x;
    id[x] = i;
  }

  int ans = -1;
  for (int i = 1; i <= 1000; i++) {
    if (id[i] != 0) {
      for (int j : pairs[i]) {
        if (id[j] != 0) {
          ans = std::max(ans, id[i] + id[j]);
        }
      }
    }
  }
  std::cout << ans << '\n';
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

  for (int i = 1; i <= 1000; i++) {
    for (int j = 1; j <= 1000; j++) {
      if (std::gcd(i, j) == 1) {
        pairs[i].push_back(j);
      }
    }
  }

  while (tt--) {
    solve();
  }

  return 0;
}
