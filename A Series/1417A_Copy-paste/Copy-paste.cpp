#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, k, index;
        cin >> n >> k;

        int arr[n], min = INT16_MAX, ans = 0;
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
            if (min > arr[j]) {
                min = arr[j];
                index = j;
            }
        }

        for (int j = 0; j < n; ++j) {
            if (index != j) {
                if (arr[j] < k) {
                    ans += (k - arr[j]) / min;
                }
            }
        }

        cout << ans << endl;
    }
}
