#include <iostream>
#include <vector>

std::pair<int, int> idk(int x, int y, int a, int b) {
    std::pair<int, int> p;
    p.first = x - a;
    p.second = y - b;
    return p;
}

void solve() {
    int a, b, x1, y1, x2, y2, n = 8;
    std::cin >> a >> b >> x1 >> y1 >> x2 >> y2;

    std::vector<std::pair<int, int>> p;
    std::vector<std::pair<int, int>> q;

    p.push_back(idk(x1, y1, a, b));
    p.push_back(idk(x1, y1, a, -b));
    p.push_back(idk(x1, y1, -a, b));
    p.push_back(idk(x1, y1, -a, -b));
    if (a != b) {
        p.push_back(idk(x1, y1, b, a));
        p.push_back(idk(x1, y1, b, -a));
        p.push_back(idk(x1, y1, -b, a));
        p.push_back(idk(x1, y1, -b, -a));
    }

    q.push_back(idk(x2, y2, a, b));
    q.push_back(idk(x2, y2, a, -b));
    q.push_back(idk(x2, y2, -a, b));
    q.push_back(idk(x2, y2, -a, -b));
    if (a != b) {
        q.push_back(idk(x2, y2, b, a));
        q.push_back(idk(x2, y2, b, -a));
        q.push_back(idk(x2, y2, -b, a));
        q.push_back(idk(x2, y2, -b, -a));
    }

    int cnt = 0;
    if (a == b) {
        n = 4;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (p[i].first == q[j].first && p[i].second == q[j].second) {
                cnt++;
                break;
            }
        }
    }

    std::cout << cnt << '\n';
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("/home/vikram/code/input", "r", stdin);
    freopen("/home/vikram/code/output", "w", stdout);
#endif

    int tt = 1;
    std::cin >> tt;

    while (tt--) {
        solve();
    }

    std::cout << '\n';
    return 0;
}