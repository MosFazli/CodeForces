#include <iostream>

using namespace std;

int main() {
    string a[6] = {"purple","green","blue","orange","red","yellow"};
    string b[6] = {"Power","Time","Space","Soul","Reality","Mind"};
    int flag[6] = {0,0,0,0,0,0};
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string c ;
        cin >> c;
        for (int j = 0; j < 6; ++j) {
            if(c == a[j]){
                flag[j]++;
            }
        }
    }

    cout << 6-n<<endl;
    for (int i = 0; i < 6; ++i) {
        if(flag[i] == 0){
            cout<<b[i]<<endl;
        }
    }
}
