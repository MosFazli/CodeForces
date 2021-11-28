#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, d;
        cin >> n >> d;
        int ans = 0;
        cin >> ans;
        for (int j = 1; j <= n-1; ++j) {
            int a;
            cin >> a;
            if ((a * j) <= d) {
                ans += a;
                d -= a * j;
            } else {
                if (d < j)
                    continue;
                else {
                    ans += d / j;
                    d = d % j;
                }
            }
        }

        cout << ans<<endl;

    }
}
