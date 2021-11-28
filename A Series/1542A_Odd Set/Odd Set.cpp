#include <iostream>

using namespace std;

int main() {
    int t ;
    cin >> t;


    for (int i = 0; i < t; ++i) {
        int n ;
        cin >> n;
        int oddNumber = 0;
        int evenNumber = 0;

        for (int j = 0; j < 2 * n; ++j) {
            int k ;
            cin >> k ;
            if(k % 2 == 0){
                evenNumber++;
            }else if(k % 2 != 0){
                oddNumber++;
            }
        }

        if(oddNumber == evenNumber && oddNumber == n){
            cout << "YES"<<endl;
        }else{
            cout << "No"<<endl;
        }

    }
}
