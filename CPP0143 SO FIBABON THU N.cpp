#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long f[100];
		f[1] = 1;
		f[2] = 1;
		for(int i = 3; i <= n; i++){
			f[i] = f[i-1] + f[i-2]; 
		}
		cout << f[n]<< endl;
	}
}
