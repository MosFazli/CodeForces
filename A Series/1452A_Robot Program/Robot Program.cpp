#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int x, y, m;
        cin >> x >> y;
        if (x == y) {
            cout << x + y << endl;
        } else if(x == y+1 || x+1 == y){
            cout << x+y << endl;
        }else{
            if (x > y) {
                m = x;
            } else {
                m = y;
            }
            cout<< m + (m-1)<<endl;
        }


    }

}
