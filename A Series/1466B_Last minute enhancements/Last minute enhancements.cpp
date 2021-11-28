#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        if (n == 1) {
            int temp ;cin >> temp;
            cout << 1 << endl;
        } else {
            vector<int> v;
            int a , b;
            cin >> a;
            v.push_back(a);
            for (int j = 1; j < n; ++j) {
                cin >> b;
                if(v.at(v.size()-1) != b && v.at(v.size()-1) < b){
                    v.push_back(b);
                }else if(v.at(v.size()-1) <= b){
                    int c = b+1;
                    v.push_back(c);
                }else{

                }
            }

            cout << v.size()<<endl;
        }

    }

}