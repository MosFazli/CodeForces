#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string a;
        cin >> a;

        if(a.size()%2 != 0) {
            for (int j = 0; j < a.length() / 2 + 1; ++j) {
                if(a[a.length()-j] != 'a'){
                    string b = "";
                    for (int k = 0; k < a.length(); ++k) {
                        if(a[k] < j){
                            b += a[k];
                        }else if(a[k] > j){
                            b += a[k];
                        }else{
                            b += "a";
                        }
                    }
                    cout << "YES" << endl << b << endl;
                }
            }
        }
    }
}
