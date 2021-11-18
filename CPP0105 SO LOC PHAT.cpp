#include<iostream>
using namespace std;
int kt(int n){
	while(n > 0){
		int x=n%10;
		if(x != 0 && x != 6 && x != 8) return 0;
		n /= 10;
	}
	return 1;
}
main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(kt(n)) cout << "YES" << endl;
		else cout << "NO" << endl; 
	}
}
