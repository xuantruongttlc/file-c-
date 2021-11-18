#include<iostream>
using namespace std;

main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], max = -1;
		for(int i = 0 ; i < n; i++){
			cin >> a[i];
			if(max < a[i])  max = a[i];
		}
		cout << max << endl;

	}
}
