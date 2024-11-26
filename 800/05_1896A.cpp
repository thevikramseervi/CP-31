#include <iostream>
#include <vector>

using namespace std;

int isArrSorted(vector<int> &a, int n) {
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      return 0;
    }
  }
  return 1;
}

// is this possible
// Select an index i from 2 to n−1 such that ai − 1 < ai and ai > ai + 1. Swap
// ai and ai + 1

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int fn(vector<int> &a) {
  int n = a.size();
  if (isArrSorted(a, n)) {
    return 1;
  }
  for (int i = 1; i < n - 1; i++) {
    if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
      swap(a[i], a[i + 1]);
      fn(a);
    }
  }
  return -1;
}

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while (tt--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    if (isArrSorted(a, n)) {
      cout << "YES\n";
      continue;
    }

    if (!fn(a)) {
      cout << "NO\n";
    }
  }

  return 0;
}