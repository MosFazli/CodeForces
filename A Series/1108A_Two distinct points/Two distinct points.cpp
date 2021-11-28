#include <iostream>

using namespace std;

int main() {

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        long long int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        for (int j = l1; j <= r1; ++j) {
            bool flag = false;
            for (int k = l2; k <= r2; ++k) {
                if(j != k){
                    cout<<j <<" "<< k<< endl;
                    flag = true;
                    break;
                }
            }
            if(flag == true){
                break;
            }
        }
    }
}
