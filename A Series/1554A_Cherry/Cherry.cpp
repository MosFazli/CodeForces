#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        long long int maxSum = 0, a[n];

        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }

        for (int j = 0; j < n-1; ++j) {
            if(a[j] * a[j+1] > maxSum){
                maxSum = a[j] * a[j+1];
            }
        }

        cout<<fixed<<maxSum<<endl;
    }

}
