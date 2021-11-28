#include <iostream>

using namespace std;

int main() {
    int n , q , l , r;
    cin >> n >> q;
    string str;
    cin >> str;

    int a[str.length()];
    int x = 0;
    for (int i = 0; i < str.length(); ++i) {
        a[i] = x + str[i] - 96;
        x = a[i];
    }

    for (int i = 0; i < q; ++i) {
        cin >> l >> r;
        if(l == 1 && r != n) {
            cout << a[r - 1] << endl;
        }if(l == 1 && r == n){
            cout << a[r-1]<<endl;
        }
        else if (l > 1){
            cout << a[r - 1] - a[l - 2] << endl;
        }
    }
}
