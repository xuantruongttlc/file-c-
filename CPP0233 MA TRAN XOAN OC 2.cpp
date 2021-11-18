#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >>n>>m;
		int a[n][m],i,j;
		for(i=0; i < n; i++){
			for(j=0; j<m; j++)
			cin >> a[i][j];
		}
		int b[10001] = {0}, k=0;
		int d=0;
		while(d <= m/2){
			if(k == n*m) break;
			for(i = d; i < m-d; i++){
				b[k++] = a[d][i];
			}
			for(i = d+1; i<n-d; i++){
				if(k == n*m) break;
				b[k++]=a[i][m-d-1];
			}
			for(i = m-d-2; i >= d; i--){
				if(k == m*n) break;
				b[k++]=a[n-d-1][i];
			}
			for(i=n-d-2; i > d; i--){
				if(k == n*m) break;
				b[k++]=a[i][d];
			}
			d++;
		}
		for(int i=k-1; i >= 0; i-- ) cout << b[i] <<" ";
		cout << endl;
	}
}
