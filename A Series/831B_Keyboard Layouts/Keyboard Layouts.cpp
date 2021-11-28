#include <iostream>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    for (int i = 0; i < c.length(); ++i) {
        for (int j = 0; j < a.length(); ++j) {
            if (c[i] >= 65 && c[i] <= 90 && c[i]+32 == a[j]){
                c[i] = b[j]-32;
                break;
            }else if (c[i] > 90 && c[i] == a[j]){
                c[i] = b[j];
                break;
            }
        }
    }

    cout << c;
}
