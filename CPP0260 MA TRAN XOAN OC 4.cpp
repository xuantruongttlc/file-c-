#include<iostream>
#include<algorithm>
using namespace std;
main(){
		int n;
		cin >>n;
		int a[1001],i,j;
		for(i=0; i < n*n; i++){
			cin >> a[i];
		}
		sort(a,a+n*n);
		int b[n+1][n+1], k=0;
		int d=0;
		for(i=0; i < n; i++){
			for(j = 0; j < n; j++){
				b[i][j] = 1;
			}
		}
		while(k < n*n){
			for(i = d; i < n-d; i++){
				if(k == n*n) break;
				b[d][i] = a[k++];
			}
			for(i = d+1; i<n-d; i++){
				if(k == n*n) break;
				b[i][n-d-1]=a[k++];
			}
			for(i = n-d-2; i >= d; i--){
				if(k == n*n) break;
				b[n-d-1][i]=a[k++];
			}
			for(i=n-d-2; i > d; i--){
				if(k == n*n) break;
				b[i][d]=a[k++];
			}
			d++;
		}
		for( i=0; i < n; i++){
			for(j=0; j < n; j++){
				cout << b[i][j] << " ";
			}
			cout << endl;
		}
}

