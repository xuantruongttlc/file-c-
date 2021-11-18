#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,a;
		cin >> n >> m;
		int d[n+m]={0};
		for(int i = 0 ; i <m+n; i++){
			cin >> a;
			d[a]++;
		}
		for(int i=0; i <m+n; i++)
		if(d[i] > 0) cout << i <<" ";
		cout << endl;
		for(int i=0; i < n+m; i++)
		if(d[i] > 1) cout << i << " ";
		cout << endl;
	}
}
