#include<iostream>
using namespace std;
int kt(long long n){
	long long x = 0;
	long long N=n;
	while(n > 0){
		x = x*10 + n%10;
		n /= 10;
	}
	if(N == x) return 1;
	else return 0;
}
main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(kt(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
