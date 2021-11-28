#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, sum = 1;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i > 0) {
            if (a[i] <= a[i - 1]) {
                sum++;
                v.push_back(a[i - 1]);
            }
        }
    }
    v.push_back(a[n - 1]);

    cout << sum << endl;

    for (int i = 0; i < v.size(); ++i) {
        cout << v.at(i) << " ";
    }
    return 0;


}
