#include<iostream>
using namespace std;
int kt(int n){
	int x = 0;
	while(n > 0){
		x = x + n%10;
		n/=10;
	}
	if(x < 10) return x;
	else return kt(x);
}
main(){
	int n,t;
	cin >> t;
	while(t--){
		cin >> n;
		int x = kt(n);
		cout << x << endl;
	}
}
