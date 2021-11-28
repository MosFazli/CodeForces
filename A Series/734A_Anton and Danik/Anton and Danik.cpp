#include <iostream>

using namespace std;

int main() {

    long long int n;
    string str;

    cin >> n >>str;

    long long int d = 0 , a = 0;

    for (long long int i = 0; i < n; ++i) {
        if(str[i] == 'D'){
            d++;
        }else{
            a++;
        }
    }


    if(d > a){
        cout << "Danik";
    }else if (a > d){
        cout << "Anton";
    }else{
        cout<<"Friendship";
    }
}
