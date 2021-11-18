#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, i, j, max=-1, s=0, a[100][100];
		cin >> n;
		for(i=0; i<n; i++){
			int x=0;
			for(j=0; j<n; j++){
				cin >> a[i][j];
				x+=a[i][j];
				s+=a[i][j];
			}
			if(x>max) max=x;
		}
		for(j=0; j<n; j++){
			int y=0;
			for(i=0; i<n; i++)
				y+=a[i][j];
			if(y>max) max=y;
		}
		cout << max*n-s << endl;
	}
}
