#include <iostream>

using namespace std;

int main() {

    int r, c, sum = 0;
    cin >> r >> c;
    string a[r];

    for (int i = 0; i < r; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < r; ++i) {
        int flag = 0;
        for (int j = 0; j < c; ++j) {
            if(a[i][j] == 'S'){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            sum += c;
            for (int j = 0; j < c; ++j) {
                a[i][j] = '+';
            }
        }
    }

    for (int i = 0; i < c; ++i) {
        int flag = 0;
        for (int j = 0; j < r; ++j) {
            if(a[j][i] == 'S'){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            for (int j = 0; j < r; ++j) {
                if(a[j][i] != '+'){
                    sum++;
                }
            }
        }
    }

    cout << sum;
}
