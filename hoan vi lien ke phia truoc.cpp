#include<bits/stdc++.h>
using namespace std;
void xuly(int n){
	int i, a[n+1];
	for(i=1; i<=n; i++) cin >> a[i];
	i=n;
	while(i>0 && a[i]>a[i-1]) i--;
	swap(a[n], a[i-1]);
	sort(a+i, a+n+1, greater<int>());
	for(i=1; i<=n; i++) cout << a[i] << ' ';
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		xuly(n);
		cout << endl;
	}
}
