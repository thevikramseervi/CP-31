#include <iostream>
#include <map>
#include <vector>
#define int long long
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	map<int, int> f;
	for (int i = 0; i < n; i++) {
		f[a[i]]++;
	}

	if (f.size() >= 3) {
		cout << "No\n";
	} else {
		int f1 = f.begin()->second;
		int f2 = f.rbegin()->second;
		if (f1 == f2) {
			cout << "Yes\n";
		} else if (n % 2 == 1 && abs(f1 - f2) == 1) {
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("C:/CP/input.txt", "r", stdin);
	freopen("C:/CP/output.txt", "w", stdout);
#endif

	int tt = 1;
	cin >> tt;

	while (tt--) {
		solve();
	}

	return 0;
}