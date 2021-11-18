#include<iostream>
using namespace std;
int kt(int n, int p){
	int x = 0;
	// tinh x = n/p + n/(p^2) + n/(p^3)+....
	while(n){
		n /= p;
		x += n;
	}
	return x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,p;
		cin >> n >> p;
		cout << kt(n,p) << endl;
	}
}
