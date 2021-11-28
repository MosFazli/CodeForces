#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        if(n == 1){
            cout<< 1 << endl;
        }else if( n == 2){
            cout << 2 << endl;
        }else{

                cout << (n/2) + 1 << endl;

        }
    }

}
