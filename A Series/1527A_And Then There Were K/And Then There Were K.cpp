#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main() {

    long long int t ;
    cin >> t;


    for (long long int i = 0; i < t; ++i) {
        long long int n ;
        cin >> n;
        long long int power = 0;
        while (n >= 1){
            n /= 2;
            power++;
        }
        cout << fixed;
        cout << setprecision(0);
        cout << pow(2,power-1)-1<<endl;
    }

}
