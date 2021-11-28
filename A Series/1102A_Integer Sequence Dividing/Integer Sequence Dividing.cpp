#include <iostream>

using namespace std;

int main() {

    long long int n ;
    cin >> n;


    long long int sum = (n * (n+1)) / 2;

    if(sum %2 == 0){
        cout << 0;
        return 0;
    }else{
        cout << 1;
        return 0;
    }
}
