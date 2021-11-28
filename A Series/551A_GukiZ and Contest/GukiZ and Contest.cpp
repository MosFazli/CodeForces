#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a,a+n,greater<int>());

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(b[i] == a[j]){
                cout << j+1 <<" ";
                break;
            }
        }
    }
}
