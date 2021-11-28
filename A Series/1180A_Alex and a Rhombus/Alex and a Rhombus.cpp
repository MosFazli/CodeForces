#include <iostream>

using namespace std;

int main() {

    long long int n;
    cin >> n;
    long int x = n, sum = 4 , ans = 1;

    if(n == 1){
        cout << 1;
        return 0;
    }

    while (x > 1){
        x--;
        ans += sum;
        sum += 4;
    }

    cout << ans;
    return 0;

}
