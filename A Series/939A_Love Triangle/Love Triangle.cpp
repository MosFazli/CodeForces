#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n+1];
    bool flag = false;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; ++i) {
        if( arr[ arr [ arr [i] ]  ] == i){
            flag = true;
        }
    }

    if( flag == false){
        cout<< "NO";
    }else{
        cout<<"YES";
    }







}
