#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long int a, b, sum = 0;
        cin >> a >> b;
        long long int c = b - a;
        if (c < 0) {
            c = -(c);
            if (c >= 5) {
                int k = c % 5;
                int d = c / 5;
                c = k;
                sum += d;
            }
            if (c >= 2 && c < 5) {
                int k = c % 2;
                int d = c / 2;
                c = k;
                sum+= d;
            }
            if (c == 1) {
                c -= 1;
                sum++;
            }
        } else if (c > 0) {
            if (c >= 5) {
                int k = c % 5;
                int d = c / 5;
                c = k;
                sum += d;
            }
            if (c >= 2 && c < 5) {
                int k = c % 2;
                int d = c / 2;
                c = k;
                sum+= d;
            }
            if (c == 1) {
                c -= 1;
                sum++;
            }
        }
        cout << sum << endl;
    }

}
