#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  std::reverse(a.begin(), a.end());

  int cnt = 0;

  for (int i = 0; i < n;) {
    if (a[i] == a[0])
      i++;
    else
      i *= 2, cnt++;
  }

  std::cout << cnt << '\n';
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