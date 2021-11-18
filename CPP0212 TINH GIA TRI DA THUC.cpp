#include<iostream>
using namespace std;
const long long mod = 1e9 + 7;

int main( ){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		long long a[n+1];
		for(int i = 0; i < n; i++) cin >> a[i];
		long long b[n];
		b[n-1] = 1;
		long long sum = 0;
		for(int i=n-2; i >= 0; i--){
			b[i] = (b[i+1]*x)%mod;
			sum += (a[i]*b[i])%mod;
		}
		sum = (sum+a[n-1]) %mod;
		cout << sum%mod<< endl;
	}
}
