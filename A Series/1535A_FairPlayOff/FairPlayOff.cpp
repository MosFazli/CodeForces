#include <iostream>

using namespace std;

int main() {
    int t ;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int a , b , c , d;
        cin >> a >> b >> c >> d;
        int x = 0;

        if(a > b && c > d){
            if (a > d){
                x++;
            }if(c > b){
                x++;
            }
        }

        if(a > b && c < d){
            if (a > c){
                x++;
            }
            if(d > b){
                x++;
            }
        }

        if(a < b && c > d){
            if ( b > d){
                x++;
            }
            if(c > a){
                x++;
            }
        }

        if(a < b && c < d){
            if (b > c){
                x++;
            }
            if(d > a){
                x++;
            }
        }


        if(x == 2){
            cout << "YES"<<endl;
        }else{
            cout <<"NO"<<endl;
        }
    }
}
