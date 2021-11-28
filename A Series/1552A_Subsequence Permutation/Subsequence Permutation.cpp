#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int k;
        string s;
        cin >> k >> s;
        string str = s;
        sort(str.begin(),str.end());
        int sum = 0;
        for (int j = 0; j < s.length(); ++j) {
            if(s[j] != str[j]){
                sum++;
            }
        }

        cout<<sum<<endl;
    }

}
