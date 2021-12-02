#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;
    string str = "bca";


    for (int i = 0; i < t; ++i) {
        int n , k ;
        cin >> n >> k;

        for (int j = 0; j < k; ++j) {
            cout << "a";
        }
        int x = n - k;
        while (x > 0){
            for (int j = 0; j < str.length(); ++j) {
                cout << str[j];
                x--;
                if (x == 0){
                    break;
                }
            }
        }

        cout << endl;
    }

}