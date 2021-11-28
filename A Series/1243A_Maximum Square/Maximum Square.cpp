#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int k;
    cin >> k;


    for (int i = 0; i < k; ++i) {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }

        sort(a, a + n);

        int k = 1;
        int max = 1;
        for (int j = 0; j < n; ++j) {
            // cout <<a[j]<<" ";
            k = a[j];
            int t = 1;
            for (int l = 1; l <= k; ++l) {
                if (l + j < n) {
                    if (a[l + j] >= k) {
                        t++;
                        if (t > max && k > max) {
                            max = t;
                        }
                    }
                }
            }
        }
        cout << max << endl;
    }
}
