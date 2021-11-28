#include <iostream>

using namespace std;

int main() {

    long long int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long int n;
        cin >> n;
        if (n == 1) {
            int k ;
            cin >> k;
            cout << 1 << endl;
        } else {
            long long int a , temp ;
            bool flag = false;
            for (int j = 0; j < n; ++j) {
                cin >> a;
                if(j == 0){
                    temp = a;
                }else{
                    if(temp != a){
                        flag = true;
                    }
                }
            }

            if(flag == true){
                cout << 1 << endl;
            }else{
                cout << n << endl;
            }

        }
    }
}
