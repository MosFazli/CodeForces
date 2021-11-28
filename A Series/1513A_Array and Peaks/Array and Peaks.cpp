#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n , k;
        cin >> n >> k;
        if(k > 0 && n < 3){
            cout << -1 << endl;
        }else if(n/2 < k){
            cout << -1 << endl;
        }else if(n/2 == k && n%2 == 0){
            cout << -1 << endl;
        }else {
            int x = n;
            for (int j = 1; j <= n; ++j) {
                cout << j << " ";
                if(k > 0){
                    cout << x << " ";
                    x--;
                    n--;
                    k--;
                }
            }
            cout << endl;
        }
    }
}
