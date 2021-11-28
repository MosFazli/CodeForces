#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        int arr[n];

        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }

        if (n % 2 == 0) {
            /*for (int j = 0; j < n-1; j += 2) {
                cout << arr[j+1] << " " << arr[j] << " ";
            }*/

            for (int j = n-1; j >= 0 ; --j) {
                cout << arr[j]<<" ";
            }
            cout << endl;
        } else {
/*            int arr2[n];
            for (int j = 1; j <= n; j += 2) {
                if (j != n) {
                    arr2[j - 1] = arr[j];
                    arr2[j] = arr[j - 1];
                }
                else{
                    arr2[j-1] = arr[j - 1];
                }
            }*/


            for (int j = n-1 ; j >= 0; --j) {
                cout << arr[j] << " ";
            }

            cout << endl;
        }

    }

}
