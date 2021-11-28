#include <iostream>

using namespace std;

int main() {

    int t ;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int k;
        cin >> k;
        int sum = 0;
        string a ;
        cin >> a;
        for (int j = 0; j < a.length(); ++j) {
            if(a[j]!= 48 && j != k-1){
                sum += a[j]-48;
                sum++;
            }if(a[j]!= 48 && j == k-1){
                sum += a[j]-48;
            }
        }

        cout << sum<<endl;

    }



}
