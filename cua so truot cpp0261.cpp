#include<iostream>
using namespace std;
int n,m,a[100][100], b[100][100];
void nhap(){
	cin >> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++) cin >> a[i][j];
	cin >> m;
	for(int i=0; i<m; i++)
		for(int j=0; j<m; j++) cin >> b[i][j];	
}
void tinh(){
	int i,j;
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			a[i][j]=a[i][j]*b[i%m][j%m];
		}
	}
}
void in(){
	for(int i=0; i< n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] <<" ";
		}
		cout<<endl;
	}
}
main(){
	nhap();
	tinh();
	in();
}