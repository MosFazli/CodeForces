#include <iostream>

using namespace std;

int main() {

    int l, r;
    cin >> l >> r;
    int flag2 = 0;


    for (int i = l; i <= r; ++i) {
        int flag = 0;
        int k = i;
        int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        while (k > 0) {
            a[k % 10]++;
            if (a[k % 10] > 1) {
                flag = 1;
                break;
            }
            k /= 10;
        }
        if (flag == 0) {
            cout << i;
            flag2 = 1;
            return 0;
        }
    }

    if (flag2 == 0){
        cout << -1;
        return 0;
    }

}
