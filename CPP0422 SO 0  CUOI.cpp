#include<iostream>
#include<cmath>
using namespace std;
main(){
	int t;
	cin >> t;
	while(t--){
		int n, d = 0;
		long long x;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> x;
			if(x != 0) cout << x <<" ";
			else 
			d++;
		}
		for( int i = 0; i < d; i++ ){
			cout << "0 ";
		}
		cout << endl;
	}
}
