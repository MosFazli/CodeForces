#include <iostream>
#include <math.h>

using namespace std;

int main() {

    long long int t ;
    cin >> t;

    for (long long int i = 0; i < t; ++i) {

        long long int a, b, c;
        cin >> a >> b >> c;

        long long int x = c;
        long long int y = abs(a - b);

        long long int ans = sqrt(x * x + y * y) + 1;
        cout << ans << endl;

    }


}
