#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1], d[1000]={0};
		for(int i=0; i < n; i++){
			cin >> a[i];
			if(a[i] > 0) d[a[i]] ++;
		}
		sort(a,a+n);
		for(int i=a[0]+1; i<= a[n-1] +1; i++){
			if(i > 0 && d[i] == 0){
				cout << i ;
				break;
			}
		} 
		cout << endl;
	}
}
