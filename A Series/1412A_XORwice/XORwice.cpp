#include <iostream>

using namespace std;

string decToBinary(int n)
{
    string num = "";
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            num += "1";
        else
            num += "0";
    }
    return num;
}

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        long long int a, b;
        cin >> a >> b;

        /*
        cout << decToBinary(a)<<endl;
        cout << decToBinary(b)<<endl<<endl;
        */

        string strA = decToBinary(a);
        string strB = decToBinary(b);

        string binAns = "";

        for (int j = 0; j < strA.length(); ++j) {
            if(strA[j] == strB[j]){
                binAns += "0";
            }else{
                binAns += "1";
            }
        }

        // cout<< binAns<<endl;

        cout<<binaryToDecimal(binAns)<<endl;
    }
}
