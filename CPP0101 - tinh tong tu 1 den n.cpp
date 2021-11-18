#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		long long s = 0, n;
		cin >> n;
		s = n*(n+1) / 2;
		cout << s << endl;
	}
}
