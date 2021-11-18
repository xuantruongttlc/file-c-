#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n>>m;
		long long s[n+m], c = 0;
		long long  a[n+1], b[m+1];
		for(int i=0 ; i  < n; i++){
			cin >> a[i];
			s[c++] = a[i];
		}
			for(int i=0 ; i  < m; i++){
			cin >> b[i];
			s[c++] = b[i];
		}
		sort(s,s+n+m);
		for(int i=0; i < c; i++){
			cout << s[i] <<" ";
		}
		cout << endl;
	}
}
