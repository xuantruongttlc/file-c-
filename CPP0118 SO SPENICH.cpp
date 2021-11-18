#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void slove( ){
	int n, x=0;
	cin >> n;
	vector <int> a;
	for(int i=2; i <= n; i++){
		int k = 0;
		while(n%i==0){
			a.push_back(i);
			k++;
			n /= i;
		}
		if(k > 0) x++;
	}
	if(a.size( ) == 3 && x == 3) cout << 1;
	else cout << 0;
}
main(){
	int t;
	cin >> t;
	while(t--){
		slove( );
		cout << endl;
	}
}
