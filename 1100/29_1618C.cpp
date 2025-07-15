#include <iostream>
#include <numeric>
#include <vector>
#define int long long

bool checkb(std::vector<int> &a, int b_gcd) {
  int n = a.size();
  for (int i = 1; i < n; i += 2) {
    if (a[i] % b_gcd == 0) {
      return false;
    }
  }
  return true;
}

bool checkc(std::vector<int> &a, int c_gcd) {
  int n = a.size();
  for (int i = 0; i < n; i += 2) {
    if (a[i] % c_gcd == 0) {
      return false;
    }
  }
  return true;
}

void solve() {
  int n;
  std::cin >> n;

  std::vector<int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int b_gcd = a[0], c_gcd = a[1];

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      b_gcd = std::gcd(b_gcd, a[i]);
    } else {
      c_gcd = std::gcd(c_gcd, a[i]);
    }
  }

  if (checkb(a, b_gcd)) {
    std::cout << b_gcd << '\n';
  } else if (checkc(a, c_gcd)) {
    std::cout << c_gcd << '\n';
  } else {
    std::cout << 0 << '\n';
  }
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
