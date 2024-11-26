#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        if (n % 3 == 0) {
            cout << "Second" << "\n";
        } else {
            cout << "First" << "\n";
        }

    }
    return 0;
}