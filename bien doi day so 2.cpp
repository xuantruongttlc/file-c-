#include <iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, i;
		long long a[100000], b[100000];
		cin >> n >> a[0] >> a[1];
		b[0]=a[0]*a[1];
		for(i=2; i<n; i++){
			cin >> a[i];
			b[i-1]=a[i-2]*a[i];
		}
		b[n-1]=a[n-2]*a[n-1];
		for(i=0; i<n; i++) cout << b[i] << " ";
		cout << endl;
	}
}
