#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n;
    int a[n], ab[402];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ab[a[i]] = 1;
    }
    cin >> m;
    int b[m];
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
        ab[b[i]] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (ab[a[i] + b[j]] != 1){
                cout << a[i] << " " << b[j];
                return 0;
            }
        }
    }

}
