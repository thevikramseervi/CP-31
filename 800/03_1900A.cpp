// if there are 3 consecutive non blocked cells / empty cells then the ans is 2;
// or else the answer is total no of empty cells;

#include <iostream>

using namespace std;

int noOfConsecutiveEmptyCells(string s, int n) {
  int res = 0, i, j;
  for (i = 0; i < n; i++) {
    if (s[i] == '.') {
      for (j = i; s[j] == '.'; j++);
      int curr = j - i;
      res = max(res, curr);
    }
  }
  return res;
}

int totalNoOfOfEmptyCells(string s, int n) {
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '.') {
      count++;
    }
  }
  return count;
}

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int tt;
  cin >> tt;

  while (tt--) {
    int n, ans = -1;
    cin >> n;

    string s;
    cin >> s;

    int consecutive_emptycells = noOfConsecutiveEmptyCells(s, n);

    if (consecutive_emptycells == 0) {
      ans = 0;
    } else if (consecutive_emptycells > 2) {
      ans = 2;
    } else {
      ans = totalNoOfOfEmptyCells(s, n);
    }

    cout << ans << "\n";
  }
  return 0;
}