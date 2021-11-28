#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long int a[n+1];
    long long int b = 1, c = 2 , d;
    for (long long int i = 0; i <= n; ++i) {
        a[i]=0;
    }
    a[1] = 1;
    a[2] = 1;

    for (long long int i = 1; i <= n; ++i) {
        d = c;
        c = c+b;
        b = d;
        if(c <= n) {
            a[c] = 1;
        }else{
            break;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if(a[i] > 0){
            cout << "O";
        }else{
            cout<<"o";
        }
    }
}
