#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int b, p, f, h, c, sum = 0;
        cin >> b >> p >> f >> h >> c;

        if (h > c) {
            if (b / 2 >= p) {
                sum += p * h;
                b = b - (p * 2);
                if (b / 2 >= f) {
                    sum += f * c;
                    b = b - (f * 2);
                } else {
                    sum += (b / 2) * c;
                    b = b - (f * 2);
                }
            } else {
                sum += (b / 2) * h;
                b = b - (p * 2);
                if (b / 2 > 2) {
                    sum += (b / 2) * c;
                    b = b - (f * 2);
                }
            }

        } else {
            if (b / 2 >= f) {
                sum += f * c;
                b = b - (f * 2);
                if (b / 2 >= p) {
                    sum += p * h;
                    b = b - (p * 2);
                } else {
                    sum += (b / 2) * h;
                    b = b - (p * 2);
                }
            } else {
                sum += (b / 2) * c;
                b = b - (f * 2);
                if (b / 2 > 2) {
                    sum += (b / 2) * h;
                    b = b - (p * 2);
                }
            }
        }


        cout << sum << endl;
    }
}
