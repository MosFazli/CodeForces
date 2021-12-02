#include <iostream>
#include <vector>
 
 
using namespace std;
 
int main() {
 
    int n , m ;
    cin >> n >> m;
    int arr[m+1];
 
    for (int i = 0; i < m+1; ++i) {
        arr[i] = 0;
    }
 
    for (int i = 0; i < n; ++i) {
        int l , r;
        cin >> l >> r;
        for (int j = l; j <= r ; ++j) {
            arr[j]++;
        }
    }
 
    vector<int> vec1 ;
    for (int i = 1; i <= m; ++i) {
        if(arr[i] == 0){
            vec1.push_back(i);
        }
    }
 
    cout << vec1.size()<<endl;
    for (int i = 0; i < vec1.size(); ++i) {
        cout << vec1.at(i)<<" ";
    }
 
}