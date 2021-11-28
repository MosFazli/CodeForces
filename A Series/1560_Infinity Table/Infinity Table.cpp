#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        long long int k;
        cin >> k;
        if (k == 1) {
            cout << 1 << " " << 1 << endl;
        } else {
            long long int jazr = sqrt(k);
            if (sqrt(k) == jazr) {
                cout << sqrt(k) << " " << 1<<endl;
            } else if (((jazr + 1) * (jazr + 1)) - (jazr) > k) {
                cout << k - (jazr * jazr) << " " << jazr + 1 << endl;
            } else {
                cout << jazr + 1 << " " << ((jazr + 1) * (jazr + 1)) - k + 1 << endl;
            }
        }
    }
}
