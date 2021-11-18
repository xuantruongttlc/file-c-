#include<bits/stdc++.h>
using namespace std;
int n, m, a[100][100];
void xuly(){
	int i, j;
	if(n==1 || m==1){ 
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				cout << a[i][j] << ' ';
		return; 
	}
	int b[n*m];
	b[0]=a[0][0];
	int t=1, c=0, d=1;
	while(t<n*m){
		while(c<n && d>=0){
			b[t++]=a[c][d];
			c++; d--;
		}
		c--; d++;
		if(c<n-1) c++;
		else d++;
		while(c>=0 && d<m){
			b[t++]=a[c][d];
			c--; d++;
		}
		c++; d--;
		if(d<m-1) d++;
		else c++;
	}
	for(i=0; i<t; i++) cout << b[i] << ' ';
}
main(){
	int t, i, j;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(i=0; i<n; i++)
			for(j=0; j<m; j++)
				cin >> a[i][j];
		xuly();
		cout << endl;
	}
}