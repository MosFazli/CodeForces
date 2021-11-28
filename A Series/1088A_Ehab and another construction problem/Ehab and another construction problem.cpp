#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = x; i >= 1; --i) {
        for (int j = i ; j >= 1 ; --j) {
            if (i % j == 0) {
                if (j * i > x) {
                    if (j / i < x) {
                        cout << i << " " << j;
                        return 0;
                    }
                }
            }
        }
    }
    cout <<"-1";
    return 0;
}
