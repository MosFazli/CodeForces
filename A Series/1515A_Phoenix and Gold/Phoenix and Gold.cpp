#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        long long int n , x , sum = 0;
        cin >> n >> x;
        int k[n];
        for (int j = 0; j < n; ++j) {
            cin >> k[j];
            sum += k[j];
        }

        if(x == sum){
            cout<<"NO"<<endl;
        }else{
            int sum2 = 0;
            cout<<"YES"<<endl;
            sort(k,k + n , greater<int>());
            for (int j = 0; j < n; ++j) {
                if((sum2 += k[j]) == x){
                    sum2 -= k[j];
                    int temp = k[j];
                    k[j] = k[n-1];
                    k[n-1] = temp;
                    cout<<k[j]<<" ";
                    sum2 += k[j];
                }else{
                    cout<<k[j]<<" ";
                }
            }
            cout<<endl;
        }
    }

}
