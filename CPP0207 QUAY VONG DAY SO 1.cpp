#include<iostream>
using namespace std;
void in(long long n, long long a[] , long long k){
	for(int i = k; i < n; i++){
		cout<< a[i] << " ";
	}
	for(long long i = 0; i < k ; i++){
		cout << a[i] << " ";
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n, k, a[100000];
		cin >> n >> k;
		for(long long i = 0; i < n; i++){
			cin>> a[i];
		}
		in(n,a,k);
	}
}
