#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        string a ;
        cin >> a;
        // po
        if(a[a.length()-1] == 'o' && a[a.length()-2] == 'p'){
            cout << "FILIPINO" << endl;
            //desu  masu
        }else if ((a[a.length()-1] == 'u' && a[a.length()-2] == 's' && a[a.length()-3] == 'e' && a[a.length()-4] == 'd') || (a[a.length()-1] == 'u' && a[a.length()-2] == 's' && a[a.length()-3] == 'a' && a[a.length()-4] == 'm')){
            cout << "JAPANESE" << endl;
            //mnida
        }else if(a[a.length()-1] == 'a' && a[a.length()-2] == 'd' && a[a.length()-3] == 'i' && a[a.length()-4] == 'n' && a[a.length()-5] == 'm'){
            cout << "KOREAN" << endl;
        }
    }
}
