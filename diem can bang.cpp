#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n, a[100000];
	cin >> t;
	while(t--){
		cin >> n;
		int s = 0, x = 0 ,  y, i, d = 0;
		for( i = 0; i < n; i ++){
			cin >> a[i];
			s = s + a[i];
		}
		for( i = 1; i < n-1; i++){
			 x = x + a[i-1];
			 y = s - x - a[i];
			if(x == y){
				cout << i + 1;
				d = 1;
				break;
			}
		}
		if(d == 0) cout << "-1";
		cout << endl;
	}
}
