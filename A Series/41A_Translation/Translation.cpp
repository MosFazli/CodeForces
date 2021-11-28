#include <iostream>

using namespace std;

int main() {
    string s, g;
    cin >> s >> g;


    string b = "";
    for (int i = s.length()-1; i >= 0 ; --i) {
        b += s[i];
    }

    if(g == b) {
        cout << "YES";
    }else{
        cout << "NO";
    }
}
