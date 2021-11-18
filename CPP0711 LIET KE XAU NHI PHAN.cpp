#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	while(t--){
		int n, a[25];
		cin>>n;
		int  m = pow(2,n);
		for(int i=0; i < m; i++){
			int x = i;
			for(int j=0; j < n; j++){
				a[j]=x%2;
				x /=2;
			}
			for(int j=n-1; j >= 0 ; j--){
				cout << a[j];
			}
			cout << " ";
		}
		cout << endl;
	}
}
