#include<iostream>
#include<math.h>
using namespace std;
int kt(long long n){
	while(n > 10){
		long long x = n%10;
		n /= 10;
		if(abs(x-n%10) != 1) return 0;
	}
	return 1;
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
