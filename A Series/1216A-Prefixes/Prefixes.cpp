#include <iostream>

using namespace std;

int main() {
    int n,k = 0;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i += 2) {
        if(s[i] == s[i+1]){
            k++;
            s[i+1] = s[i] == 'a' ? 'b':'a';
        }
    }

    cout << k << endl << s;
}
