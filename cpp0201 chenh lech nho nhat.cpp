#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i=0; i<n; i++) cin >> a[i];
		sort(a,a+n);
		int d = a[0];
		for(int i=0; i<n-1; i++){
			if(a[i+1]-a[i] < d) d=a[i+1]-a[i];
		}
		cout << d << endl;
	}
}
