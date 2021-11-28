#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;


    for (int i = n+1;  ; ++i) {
        int year = i;
        bool flag = false;
        int a[10] = {0,0,0,0,0,0,0,0,0,0};
        while (year > 0){
            int t =year%10;
            a[t]++;
            if(a[t] > 1 ){
                flag = true;
                break;
            }
            year /= 10;
        }
        if(flag == false){
            cout<<i;
            return 0;
        }
    }

}
