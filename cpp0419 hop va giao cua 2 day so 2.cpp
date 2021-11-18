#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,a[100001];
		cin >> n >> m;
		int d[100001]={0};
		for(int i = 0 ; i <m+n; i++){
			cin >> a[i];
			d[a[i]]++;
			
		}
		sort(a,a+n+m);
		for(int i=0; i <100001; i++)
		if(d[i] > 0) cout << i <<" ";
		cout << endl;
		for(int i=0; i < 100001; i++)
		if(d[i] > 1) cout << i << " ";
		cout << endl;
	}
}
