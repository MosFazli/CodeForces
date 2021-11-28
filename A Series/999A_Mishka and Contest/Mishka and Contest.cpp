#include <iostream>

using namespace std;

int main() {

    int n , k ;
    cin >> n >> k ;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int sum = 0, flag = 0;
    for (int i = 0; i < n; ++i) {
        if(arr[i] <= k){
            sum++;
        }else{
            flag = 1;
            break;
        }
    }
    for (int i = n-1; i >= 0; --i) {
        if(arr[i] <=  k){
            sum++;
        }else{
            break;
        }
    }

    if(flag == 0){
        cout << sum/2;
    }else{
        cout << sum;
    }


}
