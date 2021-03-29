#include <iostream>

using namespace std;

int main() {
	int n ;
	cin >> n;
	if(n% 2 == 0){
		if(n == 2){
			cout<<"NO";
			return 0;
		}else{
			cout<<"YES";
			return 0;
		}
	}else{
		cout<<"NO";
		return 0;
	}
}
