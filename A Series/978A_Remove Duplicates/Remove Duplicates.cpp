#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a[n];
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a[i] = x;
    }

    vector<int> v;

    for (int i = n - 1; i >= 0; --i) {
        int flag = false;
        for (int j = 0; j < v.size(); ++j) {
            if (v.at(j) == a[i]) {
                flag = true;
            }
        }
        if (flag == false) {
            v.push_back(a[i]);
        }
    }


    cout << v.size()<<endl;
    for (int i = v.size()-1 ; i >= 0 ; --i) {
        cout << v.at(i) << " ";
    }

}
