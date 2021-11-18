#include<iostream>
using namespace std;
long long kt(long long n){
	if(n == 0) return 1;
	long long a = 0, b = 1, c = 1;
	while(c <= n){
		c = a+b;
		if(c == n) return 1;
		a = b; b = c;
	}
	return 0;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin >> n; 
		if(kt(n)) cout << "YES"<<endl;
		else cout << "NO" << endl;
	}
}
