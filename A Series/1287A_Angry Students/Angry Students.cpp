#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n , sum = 0, sum2 = 0;
        string str;
        cin>> n>>str;
        bool flagA = false;
        for (int j = 0; j < n; ++j) {
            if(str[j] == 'A' && flagA == false){
                flagA = true;
            }if(str[j] == 'A' && flagA == true){
                sum = 0;
            }if(flagA == true && str[j] == 'P'){
                sum++;
                if(sum > sum2){
                    sum2 = sum;
                }
            }
        }

        cout << sum2 << endl;
    }

}
