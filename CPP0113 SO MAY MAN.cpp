#include<iostream>
using namespace std;
int kt(int n){
	int x = n%10;
	n/=10;
	if(x==6 && n%10 == 8) return 1;
	return 0;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(kt(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
