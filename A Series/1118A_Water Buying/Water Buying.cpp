#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;


    for (int i = 0; i < q; ++i) {
        long long int n, a, b;
        cin >> n >> a >> b;
        bool flag = false;
        if (n == 1) {
            cout << a << endl;
            flag = true;
        }else{
            long long int sum = 0;
        if (b < (a * 2)) {
            long long int k = n % b;
            sum = (n / 2) * b;
            if(n % 2 != 0) {
                sum +=  a;
            }
        } else {
            sum = n * a;
        }

        cout << sum << endl;

        }
    }
}
