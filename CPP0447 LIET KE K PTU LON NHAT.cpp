#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n>> k;
		int a[n+1], j = 0;
		for(int i=0; i < n; i++) cin >> a[i];
		sort(a,a+n);
		while(k--){
			cout << a[n-1-j] << " ";
			j++;
		}
		cout << endl;
	}
}
