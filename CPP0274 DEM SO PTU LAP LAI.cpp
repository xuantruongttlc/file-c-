#include<iostream>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1],i;
		int d[100000]={0};
		for(i = 0; i < n; i++){
			cin >> a[i];
			d[a[i]] ++;
		}
		int dem = 0;
		for( i = 0; i < n; i++){
			if(d[a[i]] > 1){
				dem += d[a[i]];
				d[a[i]]=0;
			}
		}
		cout << dem << endl;
	}
}
