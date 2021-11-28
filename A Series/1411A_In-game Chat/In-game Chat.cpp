#include <iostream>

using namespace std;

int main() {

int t;
cin >> t;


    while (t--){
        int n , sum = 0;
        string s;
        cin >> n >> s;

        for (int i = n-1; i >= 0 ; --i) {
            if(s[i] == ')'){
                sum++;
            }else{
                break;
            }
        }

        if(sum > (n/2)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}