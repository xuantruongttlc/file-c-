#include<iostream>
using namespace std;
long long kt(long long n){
	if(n == 0 || n==1) return 1;
	long long f1=1,f2=1,f3=0;
	while(f3 < n){
		f1=f2;
		f2=f3;
		f3=f1+f2;
	}
	if(f3 == n) return 1;
	else return 0;
}
main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long a[n+1];
		for(int i=0; i <n; i++) cin >> a[i];
		for(int i=0; i < n; i++){
			if(kt(a[i])) cout << a[i] <<" ";
		}
		cout << endl;
	}
}
