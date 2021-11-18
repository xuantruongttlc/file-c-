#include<iostream>
#include<math.h>
using namespace std;
int kt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}
main(){
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		for(int i = a; i <= b; i++){
			if(kt(i)) cout << i <<" ";
		}
		cout << endl;
	}
}
