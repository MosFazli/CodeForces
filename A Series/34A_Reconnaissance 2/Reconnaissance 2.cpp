#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int n, min = INT16_MAX, index1,index2;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; ++i) {
        if(abs(arr[i] - arr[i+1]) < min ){
            min = abs(arr[i] - arr[i+1]);
            index1 = i+1;
            index2 = i+2;
        }
    }

    if(abs(arr[0] - arr[n-1]) < min){
        index1 = 1;
        index2 = n;
    }

    cout << index1 << " "<< index2;

}
