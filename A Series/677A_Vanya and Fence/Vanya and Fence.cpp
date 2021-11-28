#include <iostream>

using namespace std;

int main() {
    long long int n , h, sum = 0;
    cin >> n >> h;
    for (long long int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        if(k > h){
            sum += 2;
        }else{
            sum += 1;
        }
    }

    cout << sum;
}
