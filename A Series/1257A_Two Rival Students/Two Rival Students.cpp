#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        if (abs(a - b) + x >= n) {
            cout << n - 1 << endl;
        } else {
            cout << abs(a - b) + x << endl;
        }
    }
}
