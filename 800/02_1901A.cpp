#include <iostream>
#include <vector>

using namespace std;

int largestDifference(vector<int> &a) {
  int res = a[0];
  for (int i = 0; i < a.size() - 1; i++) {
    res = max(res, a[i + 1] - a[i]);
  }
  return res;
}

int idk(vector<int> &a, int x) { return (2 * (x - a[a.size() - 1])); }

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while (tt--) {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    cout << max(largestDifference(a), idk(a, x)) << "\n";
  }
  return 0;
}