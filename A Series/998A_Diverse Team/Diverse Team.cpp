#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;


    int a[101];

    for (int i = 0; i < 101; ++i) {
        a[i] = 0;
    }

    vector<int> v;


    for (int i = 0; i < n; ++i) {
        int x ;
        cin >> x;
        a[x]++;
        if(a[x] == 1){
            v.push_back(i);
        }
    }

    if(v.size() >= k){
        cout<<"YES"<<endl;
        for (int i = 0; i < k; ++i) {
            cout<<v.at(i)+1<<" ";
        }
        return 0;
    }else{
        cout << "NO";
        return 0;
    }



}
