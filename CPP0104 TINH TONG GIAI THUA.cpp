#include<iostream>
using namespace std;
main(){
	long long n;
	cin >> n;
	long long d = 0, s = 1;
	for(int i = 1; i <= n; i++){
		s *= i;
		d += s;
	}
	cout << d;
}
