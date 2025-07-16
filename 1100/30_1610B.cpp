#include <iostream>
#include <vector>

bool check(int x, std::vector<int> &a, int n) {
	// i need to check if it's possible to make a palindrome by removing some x
	int i = 0, j = n - 1;
	while (i < j) {
		if (a[i] == a[j]) {
			i++, j--;
		} else if (a[i] == x) {
			i++;
		} else if (a[j] == x) {
			j--;
		} else {
			// here a[i] != x && a[j] != x;
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

	for (int i = 0; i < n; i++) {
		if (a[i] != a[n - i - 1]) {
			if (check(a[i], a, n) || check(a[n - i - 1], a, n)) {
				std::cout << "Yes\n";
			} else {
				std::cout << "No\n";
			}
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
