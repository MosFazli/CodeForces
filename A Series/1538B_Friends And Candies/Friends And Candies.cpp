#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int q;
    cin >> q;


    for (int i = 0; i < q; ++i) {
        int n;
        cin >> n;
        double sum = 0;
        int arr[n];

        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
            sum += arr[j];
        }

        double average = sum/n;

        if(floor(average) < average){
            cout << "-1" << endl;
        }
        else{
            int k = 0;
            for (int j = 0; j < n; ++j) {
                if(arr[j] > average){
                    k++;
                }
            }

            cout << k << endl;

        }
    }
}
