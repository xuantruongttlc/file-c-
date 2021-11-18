#include<iostream>
#include<cmath>
using namespace std;
void tinh(int n, long long a[]){
	long long  i,j; long long b[1000] ;
	for(i = 0; i < n; i++){
		b[i] = -1;
		for(j = 0; j < n; j++){
			if(a[j] == i) b[i]=i;
		}
	}
	for(i = 0; i < n; i++){
		cout << b[i] << " ";
	}
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long long a[1000];
		cin >> n;
		for(long long i = 0; i < n; i++) cin >> a[i];
		tinh(n,a);
		cout << endl;
	}
}
