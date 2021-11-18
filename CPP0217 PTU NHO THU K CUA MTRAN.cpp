#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin >> t; 
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n][n], b[n*n],c=0;
		for(int i = 0; i < n; i++){
			for(int j=0; j <n; j++){
				cin >> a[i][j];
				b[c++]=a[i][j];
			}
		}
		sort(b,b+n*n);
		cout << b[m-1] << endl;
	}
}
