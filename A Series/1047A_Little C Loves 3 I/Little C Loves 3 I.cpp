#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    if (n > 3) {
        if((n - 3) % 3 != 0){
            cout << 1 << " " << 2 << " " << n - 3 << endl;
        }else{
            cout << 1 << " " << 1 << " " << n - 2 << endl;
        }
    }else{
        cout << 1 << " " << 1 << " " << 1 << endl;
    }

}
