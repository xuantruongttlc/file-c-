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
		for(int i=0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		for(int i = 0; i < n/2; i++){
			cout << a[n-i-1] <<" "<< a[i] <<" ";
		}
		cout << endl;
	}
}
