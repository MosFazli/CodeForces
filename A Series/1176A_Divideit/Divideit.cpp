#include <iostream>

using namespace std;

int main() {
    long long int q;
    cin >> q;

    for (long long int i = 0; i < q; ++i) {
        long long int n;
        cin >> n;

        long long int k = 0;

        bool flag = false;

        while (n > 1) {

            while (n % 2 == 0) {
                n /= 2;
                k++;
            }
            while (n % 3 == 0) {
                n = (2 * n) / 3;
                k++;
            }
            while (n % 5 == 0) {
                n = (4 * n) / 5;
                k++;
            }

            if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n != 1){
                flag = true;
                cout << "-1"<<endl;
                break;
            }

        }

        if (flag == false) {
            cout << k << endl;
        }

    }
}
