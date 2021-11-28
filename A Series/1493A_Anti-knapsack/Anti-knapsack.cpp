#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, k, sum = 0;
        cin >> n >> k;
        vector<int> v;
        for (int j = n; j >= 1; --j) {
            if (v.size() == 0 && j != k) {
                v.push_back(j);
            }else if(v.size() > 0){
                bool flag = 0;
                for (int l = 0; l < v.size(); ++l) {
                    if((v.at(l)+j == k) || j == k){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                    v.push_back(j);
                }
            }
        }


        cout << v.size() << endl;
        for (int j = 0; j < v.size(); ++j) {
            cout << v.at(j) << " ";
        }
        cout << endl;
    }

}
