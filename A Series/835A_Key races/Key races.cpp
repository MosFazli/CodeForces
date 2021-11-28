#include <iostream>

using namespace std;

int main() {
    long long int s, v1,v2,t1,t2;
    cin >> s >> v1>> v2>>t1>>t2;
    int sum1 = (2*t1) + (s * v1);
    int sum2 = (2*t2) + (s * v2);

    if(sum1 < sum2){
        cout << "First";
    }else if (sum1 > sum2){
        cout << "Second";
    }else{
        cout <<"Friendship";
    }

}
