#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int &x : a)
    std::cin >> x;

  int i = -1, j = n;
  int alice = 0, bob = 0, ans = 0;

  while (i < j) {
    if (alice < bob) {
      alice += a[++i];
    }

    else if (bob < alice) {
      bob += a[--j];
    }

    else {
      ans = (i + 1) + (n - j);
      alice += a[++i];
      bob += a[--j];
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

  while (tt--) {
    solve();
  }

  return 0;
}
