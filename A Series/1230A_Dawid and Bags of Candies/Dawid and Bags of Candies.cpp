#include <iostream>

using namespace std;

int main() {
    long long int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if(a1+a3 == a2+a4){
        cout<<"YES";
        return 0;
    }

    if(a1+a2 == a3+a4){
        cout<<"YES";
        return 0;
    }

    if(a1+a4 == a2+a3){
        cout<<"YES";
        return 0;
    }

    if(a2+a3 == a1+a4){
        cout<<"YES";
        return 0;
    }

    if(a2 + a3 + a4 == a1){
        cout<<"YES";
        return 0;
    }

    if(a1 + a3 + a4 == a2){
        cout<<"YES";
        return 0;
    }

    if(a1 + a2 + a4 == a3){
        cout<<"YES";
        return 0;
    }

    if(a1 + a2 + a3 == a4){
        cout<<"YES";
        return 0;
    }

        cout<<"NO";

}
