#include<iostream>
#include<cmath>
using namespace std;
int kt(int n, int k){
	int t = 0, i = 2;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			t++;
			n /= i;
			if(t == k) return i;
		}
	}
	if(n > 1) {
		t++;
		if(t == k) return n;
	}
	return -1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n>> k;
		cout << kt(n,k) << endl;
	}
}
