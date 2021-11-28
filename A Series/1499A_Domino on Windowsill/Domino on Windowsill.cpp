#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k1, k2, w, b;
        cin >> n >> k1 >> k2 >> w >> b;

        int whiteSpaces = (k1 + k2) / 2;
        int blackSpaces = ((n - k1) + (n - k2)) / 2;
        if (whiteSpaces >= w && blackSpaces >= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}
