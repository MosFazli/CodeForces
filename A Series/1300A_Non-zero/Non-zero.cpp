#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n, sum = 0, mul = 1 , ans = 0;
        cin >> n;

        for (int j = 0; j < n; ++j) {
            int k;
            cin >> k;
            if (k == 0) {
                sum++;
                ans++;
                mul *= 1;
            }else{
                sum += k;
                mul *= k;
            }
        }
        if(sum == 0 || mul == 0){
            ans++;
        }
        cout << ans<<endl;
    }

}