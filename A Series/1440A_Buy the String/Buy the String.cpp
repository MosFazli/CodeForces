#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, c0, c1, h;
        string s;
        cin >> n >> c0 >> c1 >> h >> s;

        int num0 = 0, num1 = 0;
        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == '0') {
                num0++;
            } else if (s[j] == '1') {
                num1++;
            }
        }

        long long int sum = 0;
        if(c0 > c1){
            if((h+c1) < c0){
                sum = (c1 * num1) + (num0 * h) + (c1 * num0);
            }else{
                sum = (c1 * num1) + (c0 * num0);
            }
        }else if (c1 > c0){
            if((h+c0) < c1){
                sum = (c0 * num0) + (num1 * h) + (c0 * num1);
            }else{
                sum = (c1 * num1) + (c0 * num0);
            }
        }else if (c0 == c1){
            sum = (c1 * num1) + (c0 * num0);
        }

        cout << sum << endl;

    }

}
