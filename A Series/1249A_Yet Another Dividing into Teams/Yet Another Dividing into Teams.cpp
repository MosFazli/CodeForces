#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;


    for (int i = 0; i < q; ++i) {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        sort(a, a + n);
//        for (int j = 0; j < n; ++j) {
//            cout<<a[j]<<" ";
//        }
//        cout<<endl;

        bool flag = false;
        for (int j = 0; j < n - 1; ++j) {
            if (a[j + 1] - a[j] == 1) {
                cout << 2<<endl;
                flag = true;
                break;
            }
        }
        if(flag == false) {
            cout << 1 << endl;
        }


    }
}
