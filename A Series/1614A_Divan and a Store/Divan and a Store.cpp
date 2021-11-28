#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;


    for (int i = 0; i < t; ++i) {
        int n , k , l , r;
        cin >> n >> l >> r >> k;

        int arr[n] , ans = 0;
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }

        sort(arr,arr+n);

        for (int j = 0; j < n ; ++j) {
            if (arr[j] >= l && arr[j] <= r && k >= arr[j]){
                k-= arr[j];
                ans++;
            }
        }



        cout << ans << endl;




    }
}
