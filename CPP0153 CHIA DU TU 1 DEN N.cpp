#include<iostream>
using namespace std;
void kt (long long a,long long b){
	long long s = 0;
	for(long long i = 1; i <= a; i++){
		s += i%b;
	}
	cout << s <<endl;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		kt(n,k);
	}
}
