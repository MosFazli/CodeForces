#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long int l, r;
        cin >> l >> r;
        long long int a = (r / 2) + 1;
        long long int b = max(a , l);
        cout << r % b << endl;


    }

}
