#include<iostream>
using namespace std;
main(){
	int n, m,p;
	cin >> n>>m>>p;
	int a[100][100], b[100][100];
	for(int i=0; i < n; i++){
		for(int j=0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < p; j++){
			cin >> b[i][j];
		}
	}
	for(int i=0; i < n; i++){
		for(int j=0; j < p; j++){
			long long  s = 0;
			for(int t =0; t < m; t++){
				s += (long long)a[i][t]*b[t][j];
			}
			cout << s <<" ";
		}
		cout << endl;
	}
}
