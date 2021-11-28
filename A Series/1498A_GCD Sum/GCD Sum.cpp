#include <iostream>

using namespace std;

int main() {

    long long int t;
    cin >> t;


    for (long long int i = 0; i < t; ++i) {
        long long int n;
        cin >> n;


        for (long long int j = n;; ++j) {
            long long int sumOfNums = 0;
            long long int num = j;
            while (num > 0) {
                sumOfNums += num % 10;
                num /= 10;
            }

            long long int a[sumOfNums+1];
            for (int k = 2; k <= sumOfNums; ++k) {
                if(sumOfNums % k == 0){
                    a[k] = 1;
                }else{
                    a[k] = 0;
                }
            }

            bool flag = false;
            for (long long int k = 2; k <= sumOfNums; ++k) {
                if(j % k == 0 && a[k] == 1){
                    cout<<j<<endl;
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
