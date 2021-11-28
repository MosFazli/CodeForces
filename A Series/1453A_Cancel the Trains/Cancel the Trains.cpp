#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m], sum = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < m; ++j) {
            cin >> b[j];
            for (int k = 0; k < n; ++k) {
                if(b[j] == a[k]){
                    sum++;
                }
            }
        }

        cout<<sum<<endl;

    }
}
