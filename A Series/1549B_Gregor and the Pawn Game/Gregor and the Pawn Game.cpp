#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (long long int i = 0; i < t; ++i) {
        long long int n, sum = 0;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        for (long long int j = 0; j < n; ++j) {
            int flag = 0;
            if (j == 0 && b[j] == '1' && a[j + 1] == '1' && flag == 0) {
                sum += 1;
                flag = 1;
            }
            if (j == n-1 && b[j] == '1'  && a[j - 1] == '1' && flag == 0) {
                sum += 1;
                flag = 1;
            }
             if (j > 0 && j < n-1 && a[j] == '1' && b[j] == '1' && flag == 0) {
                    if(a[j-1] == '1' || a[j+1] == '1'){
                        sum += 1;
                        flag = 1;
                    }
            } if (a[j] == '0' && b[j] == '1' && flag == 0) {
                sum += 1;
                flag = 1;
            }
        }
        cout<< sum << endl;
    }
}
