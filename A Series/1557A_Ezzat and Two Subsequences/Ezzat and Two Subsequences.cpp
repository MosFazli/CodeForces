#include <iostream>
#include <iomanip>

using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        double sum = 0;
        long long int max = INT32_MIN;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a > max) {
                max = a;
            }
            sum += a;
        }

        cout << fixed << setprecision(9) << ((sum-max)/(n-1)) + max << endl;

    }
}
