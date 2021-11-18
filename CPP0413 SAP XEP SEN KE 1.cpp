#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1],i;
		for(i = 0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		if(n%2 == 0){
			for(i = 0; i < n/2 ; i++){
				cout << a[n-1-i] << " " << a[i]<<" ";
			}
		}
		else {
			for(i = 0; i <= n/2 ; i++){
				if(i < n/2) cout << a[n-1-i] << " " << a[i]<<" ";
				else cout << a[i];
			}
		}
		cout << endl;
	}
}
