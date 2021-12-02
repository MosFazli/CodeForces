#include <iostream>
 
using namespace std;
 
int main() {
 
    int arr[3], max = 0;
 
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
    }
 
    int sumOfAns = 0;
    if (arr[0] + arr[1] > arr[2]) {
        sumOfAns++;
    }
 
    if (arr[0] + arr[2] > arr[1]) {
        sumOfAns++;
    }
 
    if (arr[2] + arr[1] > arr[0]) {
        sumOfAns++;
    }
 
    if (sumOfAns == 3) {
        cout << "0";
        return 0;
    } else {
        int sum = 0;
        for (int i = 0; i < 3; ++i) {
            if (arr[i] != max) {
                sum += arr[i];
            }
        }
        cout << (max + 1) - sum;
        return 0;
    }
}