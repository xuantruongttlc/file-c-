#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n][k];
		int s[n*k], c=0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < k; j++){
				cin >> a[i][j];
				s[c++] = a[i][j];
			}
		}
		sort(s,s+n*k);
		for(int i = 0; i < c; i++){
			cout << s[i] <<" ";
		}
		cout << endl;
	}
}
