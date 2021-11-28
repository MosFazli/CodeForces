#include <iostream>

using namespace std;

int main() {

    long long int n, min = 9999999999, max = 0;

    cin >> n;


    for (int i = 0; i < n; ++i) {

        long long int a;
        cin >> a;

        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
    }

    cout << (max - min) - n + 1;


}
