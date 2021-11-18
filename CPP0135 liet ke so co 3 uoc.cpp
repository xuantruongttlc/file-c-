#include<iostream>
#include<cmath>
using namespace std;
int kt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 2; i*i <= n; i++){
			if(kt(i) && i*i <= n) cout << i*i <<" ";
		}
		cout << endl;
	}
}
