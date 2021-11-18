#include<bits/stdc++.h>
using namespace std;
void in(int N){
	int i, j, n=4*N, a[50][50], A[50][50], b[800], B[800], m=1, t=2;
	int M=n*n;
	for(i=0; i<n; i++)
		for(j=0; j<n; j++){
			a[i][j]=m++;
			A[i][j]=M--;
		}
	for(i=0; i<n; i++){
		b[i]=a[i][0];
		B[i]=A[i][0];
	}
	int x, y, k=n, u=1, v=n-1;
	while(t<=2*n-1){
		if(t%2==0){
			if(t%4==0){
				x=u;
				for(i=n-u-2; i>u; i--){
					b[k]=a[x][i];
					B[k++]=A[x][i];
				}
				t++;
			}
			else{
				x=v;
				for(i=n-v; i<v; i++){
					b[k]=a[x][i];
					B[k++]=A[x][i];
				}
				t++;
			}
		}
		else{
			if(t%4==3){
				y=v-1;
				for(i=y; i>=n-v; i--){
					b[k]=a[i][y];
					B[k++]=A[i][y];
				}
				v-=2;
				t++;
			}
			else{
				y=u+1;
				for(i=y; i<n-y; i++){
					b[k]=a[i][y];
					B[k++]=A[i][y];
				}
				u+=2;
				t++;
			}
		}
	}
	for(i=k-1; i>=0; i--) cout << B[i] << ' ';
	cout << endl;
	for(i=k-1; i>=0; i--) cout << b[i] << ' ';
	cout << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		in(n);
	}
}