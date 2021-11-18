#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, i, a[1100][2];
		double s=0;
		cin >> n;
		cin >> a[0][0] >> a[0][1];
		for(i=1; i<n; i++){
			cin >> a[i][0] >> a[i][1];
			s+=double(a[i-1][0]*a[i][1]-a[i-1][1]*a[i][0])/2;
		}
		s+=double(a[n-1][0]*a[0][1]-a[n-1][1]*a[0][0])/2;
		cout << fixed << setprecision(3) << abs(s) << endl;
	}
}
